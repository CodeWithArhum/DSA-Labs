<p align="center">
  <img src="https://img.shields.io/badge/C++-17-00599C?style=for-the-badge&logo=cplusplus&logoColor=white" alt="C++">
  <img src="https://img.shields.io/badge/Data_Structures-Labs-BED754?style=for-the-badge" alt="DSA">
</p>

<h1 align="center">DSA Labs</h1>

<p align="center">
  <strong>Data Structures & Algorithms lab implementations in C++.</strong>
</p>

---

## Topics Covered

### List Data Structure
- Template-based abstract `List<Type>` base class
- Concrete `MyList<Type>` implementation using dynamic arrays
- Operations: insert at start/end, remove from start/end, search, size checks
- Exception handling for overflow/underflow conditions

---

## Files

| File | Description |
|---|---|
| `task-1.cpp` | Abstract base class skeleton with pure virtual methods |
| `task 2.cpp` | Complete dynamic array-based list with full CRUD operations |

---

## Operations Implemented

```cpp
addElementAtFirstIndex(Type e)   // Insert at beginning - O(n)
addElementAtLastIndex(Type e)    // Insert at end - O(1)
removeElementFromStart()         // Delete from front - O(n)
removeElementFromEnd()           // Delete from back - O(1)
search(Type e)                   // Linear search - O(n)
empty() / full() / size()        // Utility checks - O(1)
```

---

## Compile & Run

```bash
g++ -o task2 "task 2.cpp"
./task2
```

---

<p align="center">
  Built by <a href="https://github.com/CodeWithArhum"><strong>@CodeWithArhum</strong></a>
</p>
