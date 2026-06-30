#ifndef ROUTEFINDER_H
#define ROUTEFINDER_H

#include "Graph.h"
#include "Journey.h"

#include <string>
#include <vector>

class RouteFinder
{
private:

    Graph& graph;

public:

    RouteFinder(Graph& graph);

    Journey findRouteBFS(
    const std::string& source,
    const std::string& destination
);

    Journey findRouteDijkstra(
        const std::string& source,
        const std::string& destination
    );
};

#endif