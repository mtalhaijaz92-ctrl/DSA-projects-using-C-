# Hospital Priority Queue System

A simple C++ application demonstrating a priority queue-based patient management system for hospitals using Object-Oriented Programming (OOP) concepts.

## Features

* **Patient Priority Management:** Patients with higher priority numerical values are treated first.
* **Queue Operations:** Supports adding patients, viewing the highest-priority patient next, and serving/treating patients sequentially.
* **C++ STL Integration:** Built using `std::priority_queue` along with custom operator overloading (`operator<`).

## Code Structure

* **`Patient` Class:** Represents individual patient details (name, age, priority) and defines comparison logic.
* **`Hospital` Class:** Encapsulates the priority queue operations (`addPatient`, `treatPatient`, `showNextPatient`).
* **`main()` Function:** Demonstrates adding multiple patients with varying priorities and serving them in order.

## How to Run

1. **Prerequisites:** Ensure you have a C++ compiler installed (e.g., GCC, Clang, or MSVC).
2. **Compile:**
   ```bash
   g++ -o hospital_system main.cpp
