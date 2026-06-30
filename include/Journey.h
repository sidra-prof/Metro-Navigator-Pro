#ifndef JOURNEY_H
#define JOURNEY_H

#include <string>
#include <vector>

struct Journey
{
    std::string source;
    std::string destination;

    std::vector<std::string> route;

    int distance = 0;
    int fare = 0;
    int travelTime = 0;
    int totalStations = 0;
};

#endif