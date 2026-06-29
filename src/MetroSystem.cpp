#include "MetroSystem.h"
#include<vector>
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
    cout << "2. Find Shortest Distance (Dijkstra)\n";
    cout << "3. Display Metro Network\n";
    cout << "4. Exit\n";

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
        {
            string source;
            string destination;

            cin.ignore();

            cout << "\nEnter Source Station : ";
            getline(cin, source);

            cout << "Enter Destination Station : ";
            getline(cin, destination);

            vector<string> route =
                routeFinder.findRouteBFS(source, destination);

            if(route.empty())
            {
                cout << "\nNo route found.\n";
                break;
            }

            cout << "\n========== SHORTEST ROUTE ==========\n\n";

            for(size_t i = 0; i < route.size(); i++)
            {
                cout << route[i];

                if(i != route.size() - 1)
                {
                    cout << " -> ";
                }
            }

            cout << endl;

            break;
        }

        case 2:
        {
            string source;
            string destination;

            cin.ignore();

            cout << "\nEnter Source Station : ";
            getline(cin, source);

            cout << "Enter Destination Station : ";
            getline(cin, destination);

            vector<string> route =
                routeFinder.findRouteDijkstra(source, destination);

            if(route.empty())
            {
                cout << "\nNo route found.\n";
                break;
            }

            cout << "\n====== SHORTEST DISTANCE ROUTE ======\n\n";

            for(size_t i = 0; i < route.size(); i++)
            {
                cout << route[i];

                if(i != route.size() - 1)
                {
                    cout << " -> ";
                }
            }

            cout << endl;

            break;
        }

        case 3:
        {
            graph.displayGraph();
            break;
        }

        case 4:
        {
            cout << "\nThank you for using Metro Navigator Pro.\n";
            break;
        }

        default:
        {
            cout << "\nInvalid Choice.\n";
        }
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

    }while(choice != 4);
}