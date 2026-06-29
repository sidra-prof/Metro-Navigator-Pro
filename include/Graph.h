#ifndef GRAPH_H
#define GRAPH_H

#include<unordered_map>
#include<vector>
#include<string>
 #include "Edge.h"

using namespace std;
class Graph
{
private:
unordered_map<
string,
vector<Edge>
> adjacencyList;
public:
    Graph();
    void addStation(
        const string& stationName
    );
    void addConnection(
        const string& source,
        const string& destination, 
        int distance
    );
    bool stationExists(
        const string& stationName
    ) const;

    void displayGraph() const;


    const unordered_map<
    string,
    vector<Edge>
>& getAdjacencyList() const;
};

#endif

