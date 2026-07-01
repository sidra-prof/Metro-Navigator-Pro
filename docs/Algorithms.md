# Metro Navigator Pro - Algorithms Documentation

## Overview

Metro Navigator Pro uses graph-based algorithms to calculate routes between metro stations.

The metro network is represented as a **weighted graph** where:

- Each metro station is represented as a **vertex (node)**.
- Each connection between stations is represented as an **edge**.
- Edge weights represent the distance (in kilometers) between two stations.

Two different routing algorithms are implemented depending on the user's requirement.

---

# Algorithms Used

1. Breadth First Search (BFS)
2. Dijkstra's Algorithm

---

# 1. Breadth First Search (BFS)

## Purpose

BFS is used to find the route containing the **minimum number of stations** between the source and destination.

It treats every connection equally and ignores the distance between stations.

---

## Working Principle

1. Start from the source station.
2. Mark the source as visited.
3. Insert the source into a queue.
4. Remove one station from the queue.
5. Visit all unvisited neighbouring stations.
6. Store the parent of every visited station.
7. Continue until the destination is found.
8. Reconstruct the path using the parent map.

---

## Data Structures Used

- Queue
- Unordered Set
- Unordered Map
- Vector

---

## Time Complexity

O(V + E)

Where:

- V = Number of Stations
- E = Number of Connections

---

## Space Complexity

O(V)

---

## Advantages

- Very fast
- Simple implementation
- Guarantees minimum number of stations
- Suitable for unweighted graphs

---

## Limitations

- Does not consider travel distance.
- Does not calculate minimum fare.
- Does not calculate shortest travel path when edge weights differ.

---

## Example

Source:

Rajiv Chowk

Destination:

Kashmere Gate

Output:

Rajiv Chowk

↓

New Delhi

↓

Chawri Bazar

↓

Kashmere Gate

---

# 2. Dijkstra's Algorithm

## Purpose

Dijkstra's Algorithm finds the route with the **minimum total travel distance**.

Unlike BFS, it considers the distance between stations.

---

## Working Principle

1. Initialize all station distances as infinity.
2. Set the source station distance to zero.
3. Insert the source into a priority queue.
4. Select the station with the minimum distance.
5. Relax all neighbouring edges.
6. Update distances whenever a shorter path is found.
7. Store the parent station.
8. Continue until the destination is reached.
9. Reconstruct the shortest path.

---

## Data Structures Used

- Priority Queue
- Unordered Map
- Vector

---

## Time Complexity

O((V + E) log V)

Where:

- V = Number of Stations
- E = Number of Connections

---

## Space Complexity

O(V)

---

## Advantages

- Finds the shortest distance.
- Calculates realistic metro routes.
- Supports weighted graphs.
- Produces optimal paths.

---

## Limitations

- Slightly slower than BFS.
- Does not support negative edge weights.

---

## Example

Source:

Rajiv Chowk

Destination:

Noida Sector 16

Output

Rajiv Chowk

↓

Barakhamba Road

↓

Mandi House

↓

Pragati Maidan

↓

Indraprastha

↓

Yamuna Bank

↓

Akshardham

↓

Mayur Vihar Phase 1

↓

Noida Sector 15

↓

Noida Sector 16

Distance:

18 km

Fare:

₹40

Travel Time:

30 Minutes

---

# Why Two Algorithms?

The project offers two routing options because different users may have different priorities.

| Algorithm | Objective |
|------------|-----------|
| BFS | Minimum Number of Stations |
| Dijkstra | Minimum Travel Distance |

This provides flexibility and demonstrates the implementation of multiple graph traversal techniques within the same application.

---

# Comparison

| Feature | BFS | Dijkstra |
|----------|-----|-----------|
| Graph Type | Unweighted | Weighted |
| Distance Considered | No | Yes |
| Finds Minimum Stations | Yes | No |
| Finds Minimum Distance | No | Yes |
| Uses Queue | Yes | No |
| Uses Priority Queue | No | Yes |
| Complexity | O(V + E) | O((V + E) log V) |

---

# Conclusion

The combination of BFS and Dijkstra's Algorithm makes Metro Navigator Pro capable of solving two different routing problems efficiently.

BFS provides the shortest path in terms of the number of stations, while Dijkstra's Algorithm provides the shortest path in terms of travel distance. Together, these algorithms form the core routing engine of the application.