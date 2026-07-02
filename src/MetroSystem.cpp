#include "MetroSystem.h"

#include <iostream>
#include <limits>

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
        cout << "    \nMetro data loaded successfully.\n";
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

    cout<< "===========================================================================\n";
    cout << "          METRO NAVIGATOR PRO v1.0\n";
    cout << "     Graph Based Delhi Metro Route Planner\n";
    cout<< "===========================================================================\n\n";

    cout << "    1. Find Shortest Route (BFS)\n";
    cout << "    2. Find Shortest Distance (Dijkstra)\n";
    cout << "    3. Display Metro Network\n";
    cout << "    4. Exit\n\n";

    cout << "=========================================================================\n";
}

/*------------------------------------------------------------
    Get User Choice
------------------------------------------------------------*/

int MetroSystem::getUserChoice() const
{
    int choice;

    cout << "    \nEnter Choice > ";

    cin >> choice;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return choice;
}

/*------------------------------------------------------------
    Display Journey
------------------------------------------------------------*/

void MetroSystem::displayJourney(
    const Journey& journey
) const
{
    if(journey.route.empty())
    {
        cout << "\nNo route found.\n";
        return;
    }

    cout << "\n=========================================\n";
    cout << "           JOURNEY SUMMARY\n";
    cout << "=========================================\n\n";

    cout << "Source          : "
         << journey.source << endl;

    cout << "Destination     : "
         << journey.destination << endl;

    cout << "Stations        : "
         << journey.totalStations << endl;

    if(journey.distance > 0)
    {
        cout << "Distance        : "
             << journey.distance
             << " km\n";

        cout << "Fare            : Rs."
             << journey.fare
             << endl;

        cout << "Travel Time     : "
             << journey.travelTime
             << " minutes\n";
    }

    cout << "\nRoute\n";
    cout << "-----------------------------------------\n";

    for(size_t i = 0; i < journey.route.size(); i++)
    {
        cout << journey.route[i];

        if(i != journey.route.size() - 1)
        {
            cout << "\n   |\n   V\n";
        }
    }

    cout << "\n=========================================\n";
}

/*------------------------------------------------------------
    Handle BFS
------------------------------------------------------------*/

void MetroSystem::handleBFS()
{
    string source;
    string destination;

    cout << "\nEnter Source Station : ";
    getline(cin, source);

    cout << "Enter Destination Station : ";
    getline(cin, destination);

    cout << "\nSource: [" << source << "]\n";
    cout << "Destination: [" << destination << "]\n";

    cout << "\nStation Exists (Source): "
     << graph.stationExists(source) << endl;

    cout << "Station Exists (Destination): "
     << graph.stationExists(destination) << endl;

    Journey journey =
        routeFinder.findRouteBFS(
            source,
            destination
        );

    displayJourney(journey);
}

/*------------------------------------------------------------
    Handle Dijkstra
------------------------------------------------------------*/

void MetroSystem::handleDijkstra()
{
    string source;
    string destination;

    cout << "\nEnter Source Station : ";
    getline(cin, source);

    cout << "Enter Destination Station : ";
    getline(cin, destination);

    cout << "\nSource: [" << source << "]\n";
    cout << "Destination: [" << destination << "]\n";

    cout << "\nStation Exists (Source): "
     << graph.stationExists(source) << endl;

    cout << "Station Exists (Destination): "
     << graph.stationExists(destination) << endl;
     
    Journey journey =
        routeFinder.findRouteDijkstra(
            source,
            destination
        );

    journey.fare =
        fareCalculator.calculateFare(
            journey.distance
        );

    journey.travelTime =
        fareCalculator.estimateTravelTime(
            journey.distance
        );

    displayJourney(journey);
}

/*------------------------------------------------------------
    Handle User Choice
------------------------------------------------------------*/

void MetroSystem::handleUserChoice(
    int choice
)
{
    switch(choice)
    {
        case 1:
            handleBFS();
            break;

        case 2:
            handleDijkstra();
            break;

        case 3:
            graph.displayGraph();
            break;

        case 4:
            cout << "\nThank you for using Metro Navigator Pro.\n";
            break;

        default:
            cout << "\nInvalid choice.\n";
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

        choice = getUserChoice();

        handleUserChoice(choice);

    }
    while(choice != 4);
}