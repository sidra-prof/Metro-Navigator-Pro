#ifndef ROUTEFINDER_H
#define ROUTEFINDER_H
#include<string>
#include<vector>
using namespace std;

class Graph;

class RouteFinder{
    Graph& graph ;
public:
    RouteFinder(Graph& graph);
    vector<string>findRouteBFS(const string& source,
      const string& destination);

    vector<string> findRouteDijkstra(
    const string& source,
    const string& destination
);

};
#endif
