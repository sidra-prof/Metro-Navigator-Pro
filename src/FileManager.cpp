#include "Graph.h"
#include "FileManager.h"


#include<fstream>
#include<sstream>
#include<iostream>
using namespace std;

/*------------------------------------------------------------
    Load Stations
------------------------------------------------------------*/
bool FileManager::loadStations(const string& filename,Graph& graph)
{
    ifstream file(filename);
    if(!file.is_open()){
         cout << "Error opening station file.\n";
        return false;
    }
    string line;
    // skip header of csv
    getline(file,line);
    while (getline(file, line))
{
    stringstream ss(line);

    string id;
    string name;
    string metroLine;
    string interchange;

    getline(ss, id, ',');
    getline(ss, name, ',');
    getline(ss, metroLine, ',');
    getline(ss, interchange, ',');

    graph.addStation(name);
}

    file.close();

    return true;
}
    /*------------------------------------------------------------
    Load Routes
------------------------------------------------------------*/

bool FileManager::loadRoutes(
    const string& filename,
    Graph& graph)
{
    ifstream file(filename);

    if (!file.is_open())
    {
        cout << "Error opening routes file.\n";
        return false;
    }

    string line;

    // Skip CSV header
    getline(file, line);

    while (getline(file, line))
    {
        stringstream ss(line);

        string source;
        string destination;
        string distanceString;

        getline(ss, source, ',');
        getline(ss, destination, ',');
        getline(ss, distanceString, ',');

        int distance = stoi(distanceString);

        graph.addConnection(
            source,
            destination,
            distance
        );
    }

    file.close();

    return true;
}
