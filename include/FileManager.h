#ifndef FLLEMANAGER_H
#define FILEMANAGER_H
#include<string>
using namespace std;

class Graph;
class FileManager
{
public:
   bool  loadStations(const string& filename, 
   Graph& graph);

   bool loadRoutes(const string& filename,
    Graph& graph);
};

#endif
