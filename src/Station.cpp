#include "include/Station.h"
#include<iostream>
using namespace std;
 
Station::Station(){
    stationId=0;
    stationName="";
    metroLine="";
    isInterchange=false;
}
Station::Station(
    int id,
    const string& name,
    const string& line,
    bool interchange
)
{
    stationId=id;
    stationName=name;
    metroLine=line;
    isInterchange=interchange;
}
int Station::getId() const
{
    return stationId;
}

string Station::getName() const
{
    return stationName;
}

string Station::getLine() const
{
    return metroLine;
}

bool Station::getInterchangeStatus() const
{
    return isInterchange;
}

vector<pair<string,int>>
Station::getNeighbours() const
{
    return neighbours;
}

void Station::setName(
    const string& name
)
{
    stationName = name;
}

void Station::setLine(
    const string& line
)
{
    metroLine = line;
}

void Station::setInterchange(
    bool status
)
{
    isInterchange = status;
}

void Station::addNeighbour(
    const string& station,
    int distance
)
{
    neighbours.push_back(
        {station,distance}
    );
}
void Station::displayStation() const
{
    cout << "\n---------------------------\n";

    cout << "Station ID : "
         << stationId << endl;

    cout << "Name       : "
         << stationName << endl;

    cout << "Line       : "
         << metroLine << endl;

    cout << "Interchange: "
         << (isInterchange ? "Yes" : "No")
         << endl;

    cout << "Neighbours:\n";

    for(const auto& neighbour : neighbours)
    {
        cout << " -> "
             << neighbour.first
             << " ("
             << neighbour.second
             << " km)"
             << endl;
    }

    cout << "---------------------------\n";
}