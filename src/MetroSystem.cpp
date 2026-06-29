#include "MetroSystem.h"

#include <iostream>

using namespace std;

/*------------------------------------------------------------
    Constructor
------------------------------------------------------------*/

MetroSystem::MetroSystem()
    : routeFinder(graph)
{
}

/*------------------------------------------------------------
    Initialize Metro Data
------------------------------------------------------------*/

void MetroSystem::initializeSystem()
{
    bool stationsLoaded =
        fileManager.loadStations(
            "data/stations.csv",
            graph
        );

    bool routesLoaded =
        fileManager.loadRoutes(
            "data/routes.csv",
            graph
        );

    if(stationsLoaded && routesLoaded)
    {
        cout << "\nMetro data loaded successfully.\n";
    }
    else
    {
        cout << "\nFailed to load metro data.\n";
    }
}

/*------------------------------------------------------------
    Display Menu
------------------------------------------------------------*/

void MetroSystem::displayMenu() const
{
    cout << "\n=====================================\n";
    cout << "       METRO NAVIGATOR PRO\n";
    cout << "=====================================\n";

    cout << "1. Find Shortest Route (BFS)\n";
    cout << "2. Find Shortest Distance\n";
    cout << "3. Exit\n";

    cout << "=====================================\n";
}

/*------------------------------------------------------------
    Handle User Choice
------------------------------------------------------------*/

void MetroSystem::handleUserChoice(int choice)
{
    switch(choice)
    {
        case 1:
            cout << "\nBFS selected.\n";
            break;

        case 2:
            cout << "\nDijkstra selected.\n";
            break;

        case 3:
            cout << "\nThank you for using Metro Navigator Pro.\n";
            break;

        default:
            cout << "\nInvalid Choice.\n";
    }
}

/*------------------------------------------------------------
    Run Application
------------------------------------------------------------*/

void MetroSystem::run()
{
    initializeSystem();

    int choice;

    do
    {
        displayMenu();

        cout << "\nEnter Choice : ";

        cin >> choice;

        handleUserChoice(choice);

    }while(choice != 3);
}