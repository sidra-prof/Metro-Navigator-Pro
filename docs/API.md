# Metro Navigator Pro - API Documentation

## Overview

This document describes the major classes used in Metro Navigator Pro along with their responsibilities and public member functions.

The project follows a modular Object-Oriented Programming architecture where every class performs a specific task.

---

# Class Overview

| Class | Responsibility |
|--------|----------------|
| Graph | Stores metro network |
| FileManager | Loads metro data from CSV files |
| RouteFinder | Calculates metro routes |
| Journey | Stores journey information |
| FareCalculator | Calculates fare and travel time |
| MetroSystem | Controls application workflow |

---

# Graph

## Description

The Graph class represents the metro network using an adjacency list.

Each station acts as a vertex while each metro connection acts as a weighted edge.

---

## Public Functions

### Graph()

Creates an empty graph.

---

### addStation()

```cpp
void addStation(const string& stationName);
```

Adds a new station to the graph.

Parameters

- stationName : Name of the metro station.

---

### addConnection()

```cpp
void addConnection(
    const string& source,
    const string& destination,
    int distance
);
```

Creates a bidirectional connection between two stations.

Parameters

- source
- destination
- distance

---

### stationExists()

```cpp
bool stationExists(
    const string& stationName
) const;
```

Checks whether a station exists in the graph.

Returns

- true
- false

---

### displayGraph()

```cpp
void displayGraph() const;
```

Displays the entire metro network.

---

### getAdjacencyList()

```cpp
const unordered_map<
string,
vector<Edge>
>& getAdjacencyList() const;
```

Returns the graph adjacency list.

---

# FileManager

## Description

Loads metro data from CSV files and populates the graph.

---

## Public Functions

### loadStations()

```cpp
bool loadStations(
const string& filename,
Graph& graph
);
```

Reads stations.csv and inserts every station into the graph.

Returns

- true
- false

---

### loadRoutes()

```cpp
bool loadRoutes(
const string& filename,
Graph& graph
);
```

Reads routes.csv and creates weighted graph connections.

Returns

- true
- false

---

# RouteFinder

## Description

Implements graph traversal algorithms.

---

## Public Functions

### findRouteBFS()

```cpp
Journey findRouteBFS(
const string& source,
const string& destination
);
```

Calculates the route with the minimum number of stations.

Returns

Journey object.

---

### findRouteDijkstra()

```cpp
Journey findRouteDijkstra(
const string& source,
const string& destination
);
```

Calculates the shortest distance route.

Returns

Journey object.

---

# Journey

## Description

Stores complete journey information returned by RouteFinder.

---

## Data Members

```cpp
string source;

string destination;

vector<string> route;

int distance;

int fare;

int travelTime;

int totalStations;
```

---

# FareCalculator

## Description

Calculates fare and travel time.

---

## Public Functions

### calculateFare()

```cpp
int calculateFare(
int distance
) const;
```

Returns the estimated metro fare.

---

### estimateTravelTime()

```cpp
int estimateTravelTime(
int distance
) const;
```

Returns the estimated travel time.

---

# MetroSystem

## Description

Acts as the controller of the application.

Responsible for managing the complete execution flow.

---

## Public Functions

### MetroSystem()

Creates the application object.

---

### run()

```cpp
void run();
```

Starts the application.

---

## Private Functions

### initializeSystem()

Loads CSV files.

---

### displayMenu()

Displays the main menu.

---

### getUserChoice()

Reads menu selection.

---

### handleUserChoice()

Executes the selected menu option.

---

### handleBFS()

Handles Breadth First Search.

---

### handleDijkstra()

Handles Dijkstra's Algorithm.

---

### displayJourney()

Displays the complete journey summary.

---

# Class Relationships

```
main()

↓

MetroSystem

↓

FileManager

↓

Graph

↓

RouteFinder

↓

Journey

↓

FareCalculator
```

---

# Design Benefits

- Modular Design
- High Cohesion
- Low Coupling
- Easy Maintenance
- Code Reusability
- Easy Testing
- Object-Oriented Architecture

---

# Summary

Every class has a clearly defined responsibility.

This modular architecture improves readability, maintainability, scalability, and supports future enhancements without affecting existing components.