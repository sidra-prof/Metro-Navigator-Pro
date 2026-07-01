#include "MetroSystem.h"
#include <cstdlib>
#include <iostream>
#include <exception>

using namespace std;

/*------------------------------------------------------------
    Metro Navigator Pro
    Entry Point
------------------------------------------------------------*/

int main()
{
    try
    {
        MetroSystem metroSystem;

        metroSystem.run();
    }
    catch(const exception& exception)
    {
        cerr << "\nApplication Error: "
             << exception.what()
             << endl;

        return EXIT_FAILURE;
    }
    catch(...)
    {
        cerr << "\nUnknown application error occurred."
             << endl;

        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}