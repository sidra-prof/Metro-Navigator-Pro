#include "RouteFinder.h"
#include "Graph.h"

#include <iostream>
#include <queue>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>

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
            string nextStation = neighbour.first;

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