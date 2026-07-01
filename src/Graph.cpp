#include "Graph.h"
#include<iostream>
using namespace std;

Graph::Graph()
{//-------------------------------------
    //constructor
}
//-------------------------------------
// check whether a station Exists
//------------------------------------
bool Graph::stationExists(const string& stationName) const
{
    return adjacencyList.find(stationName) != adjacencyList.end();
}
/*  --------------------------------------------
    add Station
---------------------------------------------------   
*/
void Graph::addStation(const string& stationName)

{

    if(!stationExists(stationName))
    {
        adjacencyList[stationName] = {};
    }
}
/*------------------------------------------------------------
    Add connection between two stations
------------------------------------------------------------*/
void Graph::addConnection(
    const string& source,
    const string& destination,
    int distance)
{
    //Automatically creates station if they dont exists
    addStation(source);
    addStation(destination);
    //source -> destination
     Edge edge;

    edge.destination = destination;

    edge.distance = distance;

    adjacencyList[source].push_back(edge);   
    //destination -> source 
    Edge reverseEdge;

    reverseEdge.destination = source;

    reverseEdge.distance = distance;

    adjacencyList[destination].push_back(reverseEdge);
    
}

/*------------------------------------------------
         adjacency list return 
--------------------------------------------------*/       
const unordered_map<
    string,
    vector<Edge>
>& Graph::getAdjacencyList() const
{
    return adjacencyList;
}
/*------------------------------------------------------------
    Display complete metro graph
------------------------------------------------------------*/
void Graph::displayGraph() const
{
     cout << "\n=========================================\n";
    cout << "          DELHI METRO GRAPH\n";
    cout << "=========================================\n\n";

    for(const auto& station : adjacencyList){
        cout<< station.first<<"\n";

        for (const auto& neighbour : station.second)
        {
           cout << " --> "
                << neighbour.destination
                << " ("
                << neighbour.distance
                << " km)"
                << endl;
        }

        cout << endl;
    }

    cout << "=========================================\n";
}