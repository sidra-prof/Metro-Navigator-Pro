#ifndef FARECALCULATOR_H
#define FARECALCULATOR_H

class FareCalculator
{
public:

    FareCalculator() = default;

    int calculateFare(int distance) const;

    int estimateTravelTime(int distance) const;

};

#endif