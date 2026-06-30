#include "RouteFinder.h"
#include "Graph.h"
#include "Journey.h"
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
Journey RouteFinder::findRouteBFS(
    const string& source,
    const string& destination)
{
    Journey journey;

    const auto& graphData = graph.getAdjacencyList();

    if(graphData.find(source) == graphData.end())
    {
        cout << "Source station not found.\n";
        return journey;
    }

    if(graphData.find(destination) == graphData.end())
    {
        cout << "Destination station not found.\n";
        return journey;
    }

    queue<string> bfsQueue;

    unordered_set<string> visited;

    unordered_map<string,string> parent;

    bfsQueue.push(source);

    visited.insert(source);

    while(!bfsQueue.empty())
    {
        string currentStation = bfsQueue.front();

        bfsQueue.pop();

        if(currentStation == destination)
        {
            break;
        }

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

    if(source != destination &&
       parent.find(destination) == parent.end())
    {
        cout << "No route found.\n";
        return journey;
    }

    string current = destination;

    while(current != source)
    {
        journey.route.push_back(current);

        current = parent[current];
    }

    journey.route.push_back(source);

    reverse(
        journey.route.begin(),
        journey.route.end()
    );

    journey.source = source;

    journey.destination = destination;

    journey.totalStations =
        static_cast<int>(journey.route.size());

    // Distance isn't computed by BFS.
    // Leave it as 0 for now.

    return journey;
}


   
Journey RouteFinder::findRouteDijkstra(
    const string& source,
    const string& destination
)
{
    Journey journey;

    const auto& graphData = graph.getAdjacencyList();

    if(graphData.find(source) == graphData.end())
        return journey;

    if(graphData.find(destination) == graphData.end())
        return journey;

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
        return journey;
    }

    string current = destination;

    while(current != source)
    {
        journey.route.push_back(current);
        current = parent[current];
    }

    journey.route.push_back(source);

    reverse(
    journey.route.begin(),
    journey.route.end()
);
    journey.distance =
    distance[destination];
    journey.source = source;
    journey.destination = destination;

    journey.totalStations =
    static_cast<int>(journey.route.size());

    journey.totalStations =
    journey.route.size();

    return journey;

}