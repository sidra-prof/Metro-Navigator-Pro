# 🚇 Metro Navigator Pro

> **A Professional C++ Metro Navigation System using Graph Data Structures, BFS, and Dijkstra's Algorithm**

![Language](https://img.shields.io/badge/Language-C%2B%2B17-blue)
![Build](https://img.shields.io/badge/Build-GCC-success)
![License](https://img.shields.io/badge/License-MIT-green)
![Status](https://img.shields.io/badge/Status-Active-orange)

---

# 📖 About

Metro Navigator Pro is a modular C++ application that simulates a real-world metro navigation system.

The project models metro stations as nodes and connections between stations as weighted edges in a graph. It provides efficient route planning using industry-standard graph algorithms.

The primary objective of this project is to strengthen knowledge of Data Structures, Algorithms, Object-Oriented Programming, and Software Engineering principles by solving a practical real-world problem.

This project is being developed incrementally using Git and GitHub with meaningful commits to reflect a professional software development workflow.

---

# ✨ Features

## Current Features

* Graph-based Metro Network
* Breadth-First Search (Shortest Route)
* Dijkstra's Algorithm (Shortest Distance)
* CSV-Based Data Loading
* Modular Object-Oriented Design
* Professional Git Version Control
* Clean Project Architecture

---

# 🚀 Upcoming Features

* Fare Calculator
* Travel Time Estimator
* Interchange Detection
* Metro Line Information
* Admin Panel
* Save Metro Data to CSV
* Professional Console Interface
* Qt GUI Version

---

# 🛠️ Tech Stack

| Category        | Technology                             |
| --------------- | -------------------------------------- |
| Language        | C++17                                  |
| Compiler        | MinGW-w64 / GCC                        |
| IDE             | Visual Studio Code                     |
| Version Control | Git                                    |
| Repository      | GitHub                                 |
| Data Storage    | CSV Files                              |
| Algorithms      | BFS, Dijkstra                          |
| Data Structures | Graph, Queue, Priority Queue, Hash Map |

---

# 📁 Project Structure

```text
Metro-Navigator-Pro
│
├── data/
│   ├── stations.csv
│   └── routes.csv
│
├── docs/
│   ├── Architecture.md
│   ├── Algorithms.md
│   └── Development-Journal.md
│
├── include/
│
├── screenshots/
│
├── src/
│
├── tests/
│
├── .gitignore
├── CHANGELOG.md
├── LICENSE
└── README.md
```

---

# 🏗️ Project Architecture

```text
                  main()
                     │
                     ▼
              MetroSystem
                     │
     ┌───────────────┼───────────────┐
     ▼               ▼               ▼
   Graph       RouteFinder      FileManager
     │
     ▼
    Edge
     │
     ▼
  Station
```

---

# 🧠 Algorithms Used

## Breadth-First Search (BFS)

Purpose:

* Finds the shortest path based on the minimum number of stations.

Time Complexity:

```text
O(V + E)
```

Space Complexity:

```text
O(V)
```

---

## Dijkstra's Algorithm

Purpose:

* Finds the shortest route based on total travel distance.

Time Complexity:

```text
O((V + E) log V)
```

Space Complexity:

```text
O(V)
```

---

# 📊 Data Structures Used

* Graph (Adjacency List)
* Hash Map (unordered_map)
* Queue
* Priority Queue
* Vector
* Edge Structure

---

# ⚙️ Installation

Clone the repository

```bash
git clone https://github.com/<your-username>/Metro-Navigator-Pro.git
```

Move into the project directory

```bash
cd Metro-Navigator-Pro
```

Compile

```bash
g++ -Wall -Wextra -std=c++17 -Iinclude src/main.cpp src/Graph.cpp src/FileManager.cpp src/RouteFinder.cpp src/Station.cpp src/FareCalculator.cpp src/MetroSystem.cpp -o metro.exe
```

Run

```bash
metro.exe
```

---

# 📷 Screenshots

Project screenshots will be added after completion of the console interface.

---

# 📚 Learning Objectives

This project demonstrates practical implementation of:

* Object-Oriented Programming
* Graph Data Structures
* Breadth-First Search
* Dijkstra's Algorithm
* File Handling in C++
* Software Architecture
* Modular Programming
* Git and GitHub Workflow

---

# 🗺️ Future Roadmap

* Interactive Console Menu
* Fare Calculation
* Travel Time Prediction
* Interchange Optimization
* Unit Testing
* CMake Build Support
* GitHub Actions CI
* Qt Desktop GUI

---

# 📈 Version History

| Version | Status                      |
| ------- | --------------------------- |
| v0.1    | Project Initialization      |
| v0.2    | Station Module              |
| v0.3    | Graph Engine                |
| v0.4    | CSV Loader                  |
| v0.5    | BFS Route Finder            |
| v0.6    | Dijkstra Algorithm          |
| v1.0    | Metro Navigator Pro Release |

---

# 🤝 Contributing

Contributions, suggestions, and improvements are welcome.

If you would like to contribute:

1. Fork the repository
2. Create a new feature branch
3. Commit your changes
4. Submit a Pull Request

---

# 📄 License

This project is licensed under the MIT License.

See the LICENSE file for details.

---

# 👩‍💻 Author

**Sidra Chaudhary**

Computer Science Student

Passionate about Software Development, Data Structures & Algorithms, and Artificial Intelligence.

GitHub: https://github.com/sidra-prof

---

## ⭐ If you found this project helpful, consider giving it a star!
