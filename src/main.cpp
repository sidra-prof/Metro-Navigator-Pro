#include "../include/Graph.h"
#include<iostream>
using namespace std;
int main()
{
    Graph metro;

    metro.addConnection(
        "Rajiv Chowk",
        "New Delhi",
        2
    );

    metro.addConnection(
        "New Delhi",
        "Chawri Bazar",
        1
    );

    metro.addConnection(
        "Rajiv Chowk",
        "Patel Chowk",
        1
    );

    metro.displayGraph();

    return 0;
}