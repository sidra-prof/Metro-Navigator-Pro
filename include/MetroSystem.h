#ifndef METROSYSTEM_H
#define METROSYSTEM_H

#include "Graph.h"
#include "FileManager.h"
#include "RouteFinder.h"
#include "FareCalculator.h"

class MetroSystem
{
private:

    Graph graph;

    FileManager fileManager;

    RouteFinder routeFinder;

    FareCalculator fareCalculator;

public:

    MetroSystem();

    void run();

private:

    void initializeSystem();

    void displayMenu() const;

    void handleUserChoice(int choice);

};

#endif