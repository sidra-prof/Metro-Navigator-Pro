#include "FareCalculator.h"

int FareCalculator::calculateFare(int distance) const
{
    if (distance <= 0)
    {
        return 0;
    }

    if (distance <= 2)
    {
        return 10;
    }

    if (distance <= 5)
    {
        return 20;
    }

    if (distance <= 10)
    {
        return 30;
    }

    if (distance <= 20)
    {
        return 40;
    }

    return 50;
}

int FareCalculator::estimateTravelTime(int distance) const
{
    if (distance <= 0)
    {
        return 0;
    }

    // Approximate:
    // 2 minutes per km + 2 minutes boarding time

    return (distance * 2) + 2;
}