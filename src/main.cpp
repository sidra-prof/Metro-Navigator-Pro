#include "Graph.h"
#include "FileManager.h"
#include "RouteFinder.h"

#include <iostream>

using namespace std;

int main()
{
    Graph metro;

    FileManager fileManager;

    fileManager.loadStations("data/stations.csv", metro);
    fileManager.loadRoutes("data/routes.csv", metro);

    RouteFinder routeFinder(metro);

    vector<string> route =
        routeFinder.findRouteBFS(
            "Rajiv Chowk",
            "Kashmere Gate"
        );

    cout << "\n========== SHORTEST ROUTE ==========\n\n";

    for(const auto& station : route)
    {
        cout << station << endl;
    }

    cout << "\n====================================\n";

    return 0;
}