# Metro Navigator Pro - Software Architecture

## Overview

Metro Navigator Pro is a console-based route navigation system developed using C++ and Object-Oriented Programming principles.

The application models a metro network as a weighted graph where:

- Stations are represented as vertices.
- Routes between stations are represented as weighted edges.
- BFS is used to find the route with the minimum number of stations.
- Dijkstra's Algorithm is used to find the route with the minimum travel distance.

---

# High-Level Architecture

```
                +------------------+
                |      main()      |
                +------------------+
                         |
                         v
                +------------------+
                |   MetroSystem    |
                +------------------+
                  |     |      |
        ----------      |      ----------
       |                |                |
       v                v                v
+-------------+  +--------------+  +----------------+
| FileManager |  | RouteFinder  |  | FareCalculator |
+-------------+  +--------------+  +----------------+
       |
       v
+----------------+
|     Graph      |
+----------------+
       |
       v
+----------------+
| Adjacency List |
+----------------+

```

---

## Modules

### MetroSystem

Acts as the controller of the application.

Responsibilities:

- Initializes the system
- Loads CSV files
- Displays menu
- Accepts user input
- Invokes routing algorithms
- Displays journey details

---

### Graph

Represents the complete metro network.

Responsibilities:

- Store all stations
- Store all connections
- Maintain adjacency list
- Display graph

---

### FileManager

Responsible for reading CSV files.

Responsibilities:

- Read stations.csv
- Read routes.csv
- Construct graph dynamically

---

### RouteFinder

Responsible for route calculation.

Provides:

- Breadth First Search
- Dijkstra's Algorithm

---

### Journey

Stores complete journey information.

Contains:

- Source
- Destination
- Route
- Distance
- Fare
- Travel Time
- Number of Stations

---

### FareCalculator

Calculates:

- Estimated Fare
- Estimated Travel Time

---

# Data Flow

1. Application starts.
2. CSV files are loaded.
3. Graph is constructed.
4. User selects an operation.
5. RouteFinder computes the path.
6. FareCalculator computes fare and time.
7. Journey summary is displayed.

---

# Design Principles

The project follows:

- Single Responsibility Principle
- Separation of Concerns
- Modularity
- Encapsulation
- Reusability

---

# Advantages

- Easy to maintain
- Easy to extend
- Dynamic metro data
- No hardcoded routes
- Reusable modules

---

# Future Scope

- GUI Interface
- Live Metro Updates
- Database Integration
- GPS Support
- AI-based Route Recommendation
