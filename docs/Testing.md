# Metro Navigator Pro - Testing Documentation

## Overview

Testing is an essential phase of software development that ensures the application behaves correctly under different conditions.

Metro Navigator Pro was tested using manual testing techniques to verify the correctness of graph construction, route calculation, file loading, fare calculation, and user interaction.

---

# Testing Objectives

The primary objectives of testing were:

- Verify metro data loading
- Verify graph construction
- Validate Breadth First Search
- Validate Dijkstra's Algorithm
- Verify journey summary
- Verify fare calculation
- Verify travel time estimation
- Validate user input
- Detect runtime errors

---

# Testing Strategy

The application was tested module by module.

Testing Sequence

1. FileManager
2. Graph
3. RouteFinder
4. FareCalculator
5. Journey
6. MetroSystem

This ensured each module worked correctly before integrating the complete system.

---

# Test Environment

Operating System

Windows 11

Compiler

g++ (MinGW)

Language Standard

C++17

IDE

Visual Studio Code

Version Control

Git & GitHub

---

# Module Testing

## FileManager

Purpose

Verify CSV loading.

Test Cases

✔ stations.csv exists

✔ routes.csv exists

✔ Invalid file path

✔ Empty CSV

Expected Result

- Stations loaded successfully
- Routes loaded successfully
- Proper error message if file missing

Status

PASS

---

## Graph

Purpose

Verify graph construction.

Test Cases

✔ Add Station

✔ Add Connection

✔ Display Graph

✔ Duplicate Station

✔ Bidirectional Connection

Expected Result

Graph constructed correctly.

Status

PASS

---

## BFS

Purpose

Find route with minimum number of stations.

Test Cases

Source

Rajiv Chowk

Destination

Kashmere Gate

Expected

Rajiv Chowk

↓

New Delhi

↓

Chawri Bazar

↓

Kashmere Gate

Status

PASS

---

## Dijkstra

Purpose

Find shortest distance.

Test Cases

Source

Rajiv Chowk

Destination

Noida Sector 16

Expected

Shortest distance path.

Distance calculated correctly.

Status

PASS

---

## Fare Calculator

Purpose

Calculate estimated fare.

Sample Tests

Distance

2 km

Expected Fare

₹10

Result

PASS

----------------------

Distance

8 km

Expected Fare

₹30

Result

PASS

----------------------

Distance

20 km

Expected Fare

₹50

Result

PASS

---

## Travel Time

Purpose

Estimate travel time.

Sample Tests

Distance

5 km

Expected

10 minutes

PASS

----------------

Distance

15 km

Expected

25 minutes

PASS

---

# Journey Object

Purpose

Verify data storage.

Checked

✔ Source

✔ Destination

✔ Route

✔ Distance

✔ Fare

✔ Travel Time

✔ Number of Stations

Status

PASS

---

# MetroSystem

Purpose

Verify application workflow.

Test Cases

✔ Menu

✔ User Input

✔ Route Display

✔ Invalid Option

✔ Exit

Status

PASS

---

# Integration Testing

Verified interaction between all modules.

FileManager

↓

Graph

↓

RouteFinder

↓

Journey

↓

FareCalculator

↓

MetroSystem

Result

PASS

---

# Manual Test Cases

## Test Case 1

Input

Source

Rajiv Chowk

Destination

Kashmere Gate

Expected

Valid route.

PASS

---

## Test Case 2

Input

Invalid Station

Expected

Source station not found.

PASS

---

## Test Case 3

Input

Same source and destination.

Expected

Appropriate message.

PASS

---

## Test Case 4

Input

Invalid menu option.

Expected

Invalid Choice.

PASS

---

## Test Case 5

Input

Large dataset.

Expected

Correct route generation.

PASS

---

# Edge Cases

The following edge cases were considered.

- Empty graph
- Empty CSV files
- Missing CSV files
- Duplicate stations
- Invalid station names
- Same source and destination
- No available path
- Invalid menu choice

All handled successfully.

---

# Performance

Dataset Size

Approximately 50 stations.

Algorithms

BFS

Time Complexity

O(V + E)

Dijkstra

Time Complexity

O((V + E) log V)

Memory usage remained efficient due to adjacency list representation.

---

# Future Testing

Future improvements include:

- Google Test framework
- Unit Testing
- Automated Regression Testing
- Performance Benchmarking
- Stress Testing with larger datasets
- Continuous Integration (GitHub Actions)

---

# Conclusion

The testing process verified that Metro Navigator Pro performs reliably under normal and edge-case scenarios.

All major modules passed functional testing successfully, and the application demonstrates stable behaviour with dynamic metro datasets.