#include "RouteFinder.h"
#include "Graph.h"

#include <queue>
#include <limits>
#include <unordered_map>
#include <algorithm>
#include <functional>
#include <iostream>
#include <unordered_set>


using namespace std;

/*------------------------------------------------------------
    Constructor
------------------------------------------------------------*/

RouteFinder::RouteFinder(Graph& graph)
    : graph(graph)
{
}

/*------------------------------------------------------------
    Find Shortest Route using BFS
------------------------------------------------------------*/

vector<string> RouteFinder::findRouteBFS(
    const string& source,
    const string& destination)
{
    vector<string> path;

    // Get graph data
    const auto& graphData = graph.getAdjacencyList();

    // Check if source exists
    if(graphData.find(source) == graphData.end())
    {
        cout << "Source station not found.\n";
        return path;
    }

    // Check if destination exists
    if(graphData.find(destination) == graphData.end())
    {
        cout << "Destination station not found.\n";
        return path;
    }

    // Queue for BFS
    queue<string> bfsQueue;

    // Keep track of visited stations
    unordered_set<string> visited;

    // Store parent of each station
    unordered_map<string,string> parent;

    // Start BFS
    bfsQueue.push(source);
    visited.insert(source);

    while(!bfsQueue.empty())
    {
        string currentStation = bfsQueue.front();
        bfsQueue.pop();

        // Destination reached
        if(currentStation == destination)
        {
            break;
        }

        // Visit neighbours
        for(const auto& neighbour : graphData.at(currentStation))
        {
            string nextStation = neighbour.destination;

            if(visited.find(nextStation) == visited.end())
            {
                visited.insert(nextStation);

                parent[nextStation] = currentStation;

                bfsQueue.push(nextStation);
            }
        }
    }

    // No path exists
    if(source != destination &&
       parent.find(destination) == parent.end())
    {
        cout << "No route found.\n";
        return path;
    }

    // Reconstruct path
    string current = destination;

    while(current != source)
    {
        path.push_back(current);
        current = parent[current];
    }

    path.push_back(source);

    reverse(path.begin(), path.end());

    return path;

}
vector<string> RouteFinder::findRouteDijkstra(
    const string& source,
    const string& destination)
{
    vector<string> path;

    const auto& graphData = graph.getAdjacencyList();

    if(graphData.find(source) == graphData.end())
        return path;

    if(graphData.find(destination) == graphData.end())
        return path;

    unordered_map<string,int> distance;
    unordered_map<string,string> parent;

    // Initialize all distances
    for(const auto& station : graphData)
    {
        distance[station.first] = numeric_limits<int>::max();
    }

    distance[source] = 0;

    priority_queue<
        pair<int,string>,
        vector<pair<int,string>>,
        greater<pair<int,string>>
    > pq;

    pq.push({0, source});

    while(!pq.empty())
    {
        int currentDistance = pq.top().first;
        string currentStation = pq.top().second;

        pq.pop();

        if(currentStation == destination)
            break;

        for(const auto& neighbour : graphData.at(currentStation))
        {
            string nextStation = neighbour.destination;
            int weight = neighbour.distance;

            if(currentDistance + weight < distance[nextStation])
            {
                distance[nextStation] = currentDistance + weight;

                parent[nextStation] = currentStation;

                pq.push({distance[nextStation], nextStation});
            }
        }
    }

    if(source != destination &&
       parent.find(destination) == parent.end())
    {
        return path;
    }

    string current = destination;

    while(current != source)
    {
        path.push_back(current);
        current = parent[current];
    }

    path.push_back(source);

    reverse(path.begin(), path.end());

    return path;
}