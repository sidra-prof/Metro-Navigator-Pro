# Metro Navigator Pro - Development Journal

## Project Information

**Project Name:** Metro Navigator Pro

**Language:** C++17

**Paradigm:** Object-Oriented Programming

**Data Structure:** Graph (Adjacency List)

**Algorithms:** Breadth First Search (BFS), Dijkstra's Algorithm

**Version:** v1.0.0

---

# Project Objective

The objective of this project was to develop a modular metro route navigation system capable of finding optimal routes between metro stations using graph algorithms.

The project focuses on implementing Data Structures and Algorithms in a real-world application while following software engineering principles such as modularity, maintainability, and clean code.

---

# Development Timeline

## Phase 1 – Project Planning

Completed:

- Project requirements identified.
- Folder structure designed.
- Development roadmap prepared.
- GitHub repository created.
- Git initialized.

Deliverables:

- Project Structure
- GitHub Repository
- README (Initial)

---

## Phase 2 – Graph Design

Completed:

- Designed adjacency list representation.
- Created Edge structure.
- Created Graph class.
- Added station insertion.
- Added connection insertion.
- Added graph display.

Outcome:

Successfully represented the metro network as a weighted graph.

---

## Phase 3 – CSV File Loading

Completed:

- Implemented FileManager class.
- Loaded stations.csv.
- Loaded routes.csv.
- Constructed graph dynamically.

Outcome:

Metro data became configurable without modifying source code.

---

## Phase 4 – BFS Implementation

Completed:

- Implemented Breadth First Search.
- Added parent tracking.
- Path reconstruction.
- Route display.

Outcome:

Application can calculate the minimum number of stations between two locations.

---

## Phase 5 – Dijkstra Implementation

Completed:

- Priority Queue implementation.
- Distance map.
- Parent map.
- Shortest distance calculation.
- Path reconstruction.

Outcome:

Application can calculate the minimum travel distance.

---

## Phase 6 – Journey Model

Completed:

Created Journey class to store:

- Source
- Destination
- Route
- Distance
- Fare
- Travel Time
- Number of Stations

Outcome:

Both BFS and Dijkstra return a common object, improving modularity.

---

## Phase 7 – Fare Calculator

Completed:

Implemented fare estimation.

Implemented travel time estimation.

Outcome:

Application now provides additional journey information.

---

## Phase 8 – MetroSystem Controller

Completed:

Designed MetroSystem class.

Responsibilities:

- Initialize application
- Load metro data
- Display menu
- Process user input
- Execute routing algorithms
- Display journey summary

Outcome:

Improved separation of responsibilities.

---

## Phase 9 – Refactoring

Completed:

- Improved folder organization.
- Simplified code structure.
- Reduced duplication.
- Improved readability.
- Added comments.
- Standardized naming conventions.

Outcome:

Code became easier to understand and maintain.

---

## Phase 10 – Testing

Completed:

- CSV loading verification
- BFS testing
- Dijkstra testing
- Graph display testing
- Journey summary verification
- Input validation
- Manual test cases

Outcome:

Core functionality verified successfully.

---

## Challenges Faced

During development several technical challenges were encountered.

### Graph Representation

Initially designing an efficient graph structure required careful consideration of data structures.

Solution:

Used an adjacency list implemented with STL unordered_map and vector.

---

### Route Reconstruction

Finding the path after BFS and Dijkstra required parent tracking.

Solution:

Maintained a parent map and reconstructed the path in reverse order.

---

### CSV Parsing

Reading structured data from CSV files required string parsing.

Solution:

Implemented FileManager using ifstream and stringstream.

---

### GitHub SSH Configuration

Configuring GitHub authentication using SSH initially caused connection issues.

Solution:

Generated SSH keys, configured SSH agent, and successfully authenticated GitHub.

---

## Skills Developed

This project helped strengthen understanding of:

- Object-Oriented Programming
- Graph Data Structures
- Breadth First Search
- Dijkstra's Algorithm
- File Handling
- STL Containers
- Git
- GitHub
- Software Architecture
- Debugging
- Refactoring

---

## Lessons Learned

The project demonstrated that writing working code is only one part of software development.

Good software also requires:

- Clean architecture
- Proper documentation
- Version control
- Modular design
- Code readability
- Thorough testing

These practices significantly improve maintainability and scalability.

---

## Final Outcome

Metro Navigator Pro successfully meets all initial project objectives.

Implemented Features:

- Graph-based metro network
- Dynamic CSV loading
- Breadth First Search
- Dijkstra's Algorithm
- Fare estimation
- Travel time estimation
- Journey summary
- Interactive console interface

The project serves as a practical implementation of graph algorithms and object-oriented programming concepts while following professional software development practices.

---

# Version History

| Version | Description |
|----------|-------------|
| v0.1 | Project initialization |
| v0.2 | Graph implementation |
| v0.3 | CSV loading |
| v0.4 | BFS implementation |
| v0.5 | Dijkstra implementation |
| v0.6 | Journey model |
| v0.7 | Fare calculator |
| v0.8 | MetroSystem controller |
| v0.9 | Testing and refactoring |
| v1.0.0 | Stable Release |