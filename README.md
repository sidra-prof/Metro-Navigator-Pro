# 🚇 Metro Navigator Pro

> A professional C++17 console application for metro route navigation using **Graph Data Structures**, **Breadth First Search (BFS)**, and **Dijkstra's Algorithm**.

![C++](https://img.shields.io/badge/C%2B%2B-17-blue.svg)
![STL](https://img.shields.io/badge/STL-Used-success)
![OOP](https://img.shields.io/badge/OOP-Design-orange)
![Graph](https://img.shields.io/badge/Data%20Structure-Graph-red)
![Algorithms](https://img.shields.io/badge/Algorithms-BFS%20%7C%20Dijkstra-green)
![License](https://img.shields.io/badge/License-MIT-yellow)

---

# 📖 Overview

Metro Navigator Pro is a graph-based metro route planning application developed using **C++17** and **Object-Oriented Programming**.

The application dynamically loads metro station and route information from CSV files, constructs a weighted graph, and calculates optimal routes using graph traversal algorithms.

This project demonstrates practical implementation of:

- Object-Oriented Programming
- Graph Data Structure
- Breadth First Search (BFS)
- Dijkstra's Algorithm
- STL Containers
- File Handling
- Software Architecture
- Git & GitHub Workflow

---

# ✨ Features

✅ Dynamic CSV Data Loading

✅ Graph using Adjacency List

✅ Breadth First Search (Minimum Stations)

✅ Dijkstra's Algorithm (Shortest Distance)

✅ Fare Estimation

✅ Travel Time Estimation

✅ Journey Summary

✅ Interactive Console Menu

✅ Modular OOP Architecture

✅ Professional Folder Structure

---

# 🛠 Technologies Used

| Technology | Purpose |
|------------|----------|
| C++17 | Programming Language |
| STL | Data Structures |
| Graph | Metro Network |
| BFS | Minimum Stops |
| Dijkstra | Shortest Distance |
| CSV | Data Storage |
| Git | Version Control |
| GitHub | Repository Hosting |

---

# 🏗 Project Architecture

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

# 📂 Folder Structure

```
Metro-Navigator-Pro/

├── assets/
├── data/
│   ├── stations.csv
│   └── routes.csv
├── docs/
│   ├── Architecture.md
│   ├── Algorithms.md
│   ├── API.md
│   ├── Development-Journal.md
│   ├── Testing.md
│   └── Future.md
├── include/
├── screenshots/
├── src/
├── tests/
├── LICENSE
├── README.md
└── .gitignore
```

---

# 🧠 Algorithms Used

## Breadth First Search (BFS)

Purpose

Finds the route containing the minimum number of stations.

Time Complexity

```
O(V + E)
```

---

## Dijkstra's Algorithm

Purpose

Finds the shortest distance between two stations.

Time Complexity

```
O((V + E) log V)
```

---

# 📊 Data Structures Used

- Graph
- Adjacency List
- Queue
- Priority Queue
- Vector
- Unordered Map
- Unordered Set

---

# 💻 How to Compile

```bash
g++ -std=c++17 -Wall -Wextra -O2 -Iinclude src/*.cpp -o MetroNavigator.exe
```

---

# ▶ How to Run

Windows

```bash
.\MetroNavigator.exe
```

Linux

```bash
./MetroNavigator
```

---

# 🚇 Sample Journey

```
==========================================
          JOURNEY SUMMARY
==========================================

Source            : Rajiv Chowk
Destination       : Kashmere Gate

Stations          : 4
Distance          : 5 km
Fare              : ₹20
Travel Time       : 15 Minutes

Route

Rajiv Chowk
      │
      ▼
New Delhi
      │
      ▼
Chawri Bazar
      │
      ▼
Kashmere Gate

==========================================
```

---

# 📸 Screenshots

## Main Menu

> *(Add screenshots/menu.png)*

---

## BFS Route

> *(Add screenshots/bfs.png)*

---

## Dijkstra Route

> *(Add screenshots/dijkstra.png)*

---

## Metro Graph

> *(Add screenshots/graph.png)*

---

# 📚 Documentation

Detailed documentation is available in the **docs** directory.

- Architecture
- Algorithms
- API
- Development Journal
- Testing
- Future Scope

---

# 🧪 Testing

The application has been manually tested for:

- CSV Loading
- Graph Construction
- BFS
- Dijkstra
- Journey Summary
- Fare Calculation
- Invalid Inputs
- Large Dataset

Testing documentation is available in:

```
docs/Testing.md
```

---

# 🎯 Future Enhancements

- GUI Version
- Real-time Metro Updates
- Database Integration
- GPS Support
- Route Optimization
- Platform Information
- Multi-language Support
- Unit Testing
- CI/CD Pipeline

---

# 📈 Learning Outcomes

This project strengthened my understanding of:

- Object-Oriented Programming
- Graph Data Structures
- Graph Algorithms
- STL
- File Handling
- Software Engineering
- Git
- GitHub
- Clean Code
- Modular Programming

---

# 📜 License

This project is licensed under the MIT License.

See the LICENSE file for details.

---

# 👩‍💻 Author

**Sidra Chaudhary**

B.Sc. Computer Science

Delhi University

GitHub: https://github.com/sidra-prof

---

# ⭐ If you found this project useful

Please consider giving it a ⭐ on GitHub.

Feedback and suggestions are always welcome.