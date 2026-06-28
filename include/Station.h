#ifndef STATION_H
#define STATION_H

#include<string>
#include<vector>
using namespace std;

class Station
{
  private:
    int stationId;
    string stationName;
    string metroLine;
    bool isInterchange;
    
    //neighbour station + distance 
    vector<pair<string,int>> neighbours;  
  public:
    Station();
    Station(
        int id,
        const string& name,
        const string& line,
        bool interchange
    );
    //Getters 
    int getId() const;
    string getName() const;
    string getLine() const;
    bool getInterchangeStatus() const;
    vector<pair<string,int >> getNeighbours() const;

    // Setters
    void setName( const string&  name);
    void setLine(const string& line);
    void setInterchange(bool status);

    void addNeighbour(const string& station , 
    int distance);

    void displayStation() const;

};
#endif