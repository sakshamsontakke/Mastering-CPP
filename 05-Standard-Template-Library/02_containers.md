# 📦 C++ STL Containers — Complete Reference Guide
> **C++ Tutorials for Beginners #70** | Part of the Standard Template Library Series

---

## 📌 Table of Contents

- [What is the STL?](#what-is-the-stl)
- [STL Overview](#stl-overview)
- [Container Categories](#container-categories)
- [Sequence Containers](#sequence-containers)
- [Associative Containers](#associative-containers)
- [Derived (Container Adapters)](#derived-container-adapters)
- [Complexity Comparison Table](#complexity-comparison-table)
- [When to Use Which Container?](#when-to-use-which-container)
- [Internal Data Structures](#internal-data-structures)
- [Header File Reference](#header-file-reference)
- [Quick Code Examples](#quick-code-examples)

---

## What is the STL?

The **Standard Template Library (STL)** is a powerful set of C++ template classes and functions that provides general-purpose classes and functions with templates that implement many popular and commonly used algorithms and data structures.

The STL has **three core components**:

```mermaid
mindmap
  root((STL))
    Containers
      Store data
      Objects holding collections
      Sequence
      Associative
      Derived
    Algorithms
      Process data
      sort
      search
      transform
      copy
    Iterators
      Bridge between containers and algorithms
      Point to elements
      Traverse containers
      Input / Output / Forward / Bidirectional / Random
```

---

## STL Overview

```mermaid
flowchart TD
    STL["🗄️ C++ STL"] --> C["📦 Containers"]
    STL --> A["⚙️ Algorithms"]
    STL --> I["🔗 Iterators"]

    C --> SC["Sequence Containers"]
    C --> AC["Associative Containers"]
    C --> DC["Derived / Adapter Containers"]

    SC --> V["vector"]
    SC --> L["list"]
    SC --> DQ["deque"]
    SC --> AR["array"]
    SC --> FL["forward_list"]

    AC --> S["set"]
    AC --> MS["multiset"]
    AC --> M["map"]
    AC --> MM["multimap"]
    AC --> US["unordered_set"]
    AC --> UM["unordered_map"]

    DC --> ST["stack"]
    DC --> Q["queue"]
    DC --> PQ["priority_queue"]

    style STL fill:#1e1e2e,color:#cdd6f4,stroke:#89b4fa
    style C fill:#313244,color:#cdd6f4,stroke:#89dceb
    style A fill:#313244,color:#cdd6f4,stroke:#a6e3a1
    style I fill:#313244,color:#cdd6f4,stroke:#fab387
    style SC fill:#45475a,color:#cdd6f4,stroke:#89dceb
    style AC fill:#45475a,color:#cdd6f4,stroke:#a6e3a1
    style DC fill:#45475a,color:#cdd6f4,stroke:#fab387
```

---

## Container Categories

```mermaid
graph LR
    subgraph SEQ["🔵 Sequence Containers — Linear Storage"]
        V2["vector"] --> L2["list"] --> DQ2["deque"] --> AR2["array"] --> FL2["forward_list"]
    end

    subgraph ASSOC["🟢 Associative Containers — Tree/Hash Storage"]
        S2["set"] --- M2["map"] --- MS2["multiset"] --- MM2["multimap"]
        US2["unordered_set"] --- UM2["unordered_map"]
    end

    subgraph DERIV["🟠 Derived Containers — Restricted Interface"]
        ST2["stack"] --- Q2["queue"] --- PQ2["priority_queue"]
    end

    style SEQ fill:#1e3a5f,color:#cdd6f4,stroke:#89dceb
    style ASSOC fill:#1a3d2b,color:#cdd6f4,stroke:#a6e3a1
    style DERIV fill:#3d2010,color:#cdd6f4,stroke:#fab387
```

---

## Sequence Containers

Sequence containers store elements **in a linear, ordered fashion**. The position of each element depends on when and where it was inserted.

### Memory Layout Visualization

```
vector / array — Contiguous Memory
┌─────┬─────┬─────┬─────┬─────┬─────┐
│  10 │  20 │  30 │  40 │  50 │  60 │
└─────┴─────┴─────┴─────┴─────┴─────┘
  [0]   [1]   [2]   [3]   [4]   [5]
        ↑ Random access: O(1) via index

list — Doubly Linked (Non-contiguous)
┌──────┐   ┌──────┐   ┌──────┐   ┌──────┐
│  10  │◄──│  20  │◄──│  30  │◄──│  40  │
│ next─┼──►│ next─┼──►│ next─┼──►│ null │
└──────┘   └──────┘   └──────┘   └──────┘
  ↑ Insertion/deletion anywhere: O(1) with iterator

deque — Segmented Memory (chunks)
[chunk 1]   [chunk 2]   [chunk 3]
┌──┬──┐     ┌──┬──┐     ┌──┬──┐
│10│20│     │30│40│     │50│60│
└──┴──┘     └──┴──┘     └──┴──┘
  ↑ Fast insert/delete at BOTH ends
```

### `std::vector`

```mermaid
flowchart LR
    subgraph VEC["std::vector — Dynamic Array"]
        direction LR
        A1["10"] --> A2["20"] --> A3["30"] --> A4["40"] --> A5["..."] --> CAP["[capacity]"]
    end
    note1["✅ O(1) random access\n✅ O(1) push_back (amortized)\n❌ O(n) insert/delete in middle\n❌ Reallocation on overflow"]
    VEC -.-> note1
```

```cpp
#include <vector>
#include <iostream>

int main() {
    std::vector<int> v = {10, 20, 30, 40, 50};

    v.push_back(60);         // O(1) amortized — add to end
    v.insert(v.begin(), 5);  // O(n) — insert at front (slow!)

    std::cout << v[2];       // O(1) — random access
    std::cout << v.size();   // number of elements
    std::cout << v.capacity(); // allocated memory slots

    // Iterating
    for (auto& x : v) std::cout << x << " ";
    return 0;
}
```

### `std::list`

A **doubly linked list** — each element stores a pointer to both the next and previous node.

```cpp
#include <list>

int main() {
    std::list<int> lst = {10, 20, 30};

    lst.push_front(5);   // O(1) — insert at front
    lst.push_back(40);   // O(1) — insert at back

    auto it = lst.begin();
    std::advance(it, 2);
    lst.insert(it, 99);  // O(1) — insert at iterator position

    lst.remove(20);      // O(n) — find and remove by value
    return 0;
}
```

### `std::deque`

A **double-ended queue** with fast insert/delete at both ends and O(1) random access (slightly slower than vector).

```cpp
#include <deque>

int main() {
    std::deque<int> dq = {20, 30, 40};

    dq.push_front(10);  // O(1) — fast front insert
    dq.push_back(50);   // O(1) — fast back insert

    dq.pop_front();     // O(1) — remove from front
    dq[1] = 99;         // O(1) — random access
    return 0;
}
```

### `std::array` (C++11)

A **fixed-size** stack-allocated array — same as C-style arrays but with STL interface.

```cpp
#include <array>

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    arr.fill(0);         // set all to 0
    arr.size();          // always 5
    arr[2] = 42;         // O(1) access
    return 0;
}
```

### `std::forward_list` (C++11)

A **singly linked list** — uses less memory than `list` but can only iterate forward.

```cpp
#include <forward_list>

int main() {
    std::forward_list<int> fl = {10, 20, 30};
    fl.push_front(5);    // O(1)
    fl.pop_front();      // O(1)
    // No push_back — no tail pointer
    return 0;
}
```

---

## Associative Containers

Associative containers store elements in a **sorted order** (typically using a Red-Black Tree) or in an **unordered** manner (using Hash Tables). They enable fast lookup, insertion, and deletion.

### Ordered — Red-Black Tree Structure

```mermaid
graph TD
    ROOT["30 (Black)"]
    ROOT --> L10["20 (Red)"]
    ROOT --> R50["40 (Red)"]
    L10 --> LL["10 (Black)"]
    L10 --> LR["25 (Black)"]
    R50 --> RL["35 (Black)"]
    R50 --> RR["50 (Black)"]

    style ROOT fill:#2d2d2d,color:#fff,stroke:#ff5555
    style L10 fill:#ff5555,color:#fff,stroke:#ff5555
    style R50 fill:#ff5555,color:#fff,stroke:#ff5555
    style LL fill:#2d2d2d,color:#fff
    style LR fill:#2d2d2d,color:#fff
    style RL fill:#2d2d2d,color:#fff
    style RR fill:#2d2d2d,color:#fff
```

> **Red-Black Tree** guarantees O(log n) search, insert, and delete. Elements are always kept sorted.

### `std::set` and `std::multiset`

```cpp
#include <set>

int main() {
    std::set<int> s = {5, 3, 8, 1, 3};  // {1, 3, 5, 8} — no duplicates, sorted

    s.insert(4);         // O(log n)
    s.erase(3);          // O(log n)
    s.count(5);          // O(log n) — 0 or 1 for set
    s.find(8);           // O(log n) — returns iterator

    std::multiset<int> ms = {5, 3, 8, 3}; // {3, 3, 5, 8} — allows duplicates
    ms.count(3);         // returns 2
    return 0;
}
```

### `std::map` and `std::multimap`

```cpp
#include <map>
#include <string>

int main() {
    std::map<std::string, int> scores;

    scores["Alice"] = 95;   // O(log n)
    scores["Bob"]   = 87;

    scores.at("Alice");     // O(log n) — throws if not found
    scores.count("Bob");    // O(log n) — 0 or 1
    scores.find("Alice");   // O(log n) — iterator

    // Iterates in sorted key order
    for (auto& [key, val] : scores)
        std::cout << key << ": " << val << "\n";

    // multimap allows duplicate keys
    std::multimap<std::string, int> mm;
    mm.insert({"Alice", 90});
    mm.insert({"Alice", 95});  // Both stored
    return 0;
}
```

### Unordered Variants — Hash Table Structure

```
Unordered Map / Set — Hash Table

Key "Alice" → hash(Alice) = 3 → Bucket[3] → ("Alice", 95)
Key "Bob"   → hash(Bob)   = 7 → Bucket[7] → ("Bob", 87)

Buckets:
[0] → empty
[1] → empty
[2] → empty
[3] → ("Alice", 95)
[4] → empty
...
[7] → ("Bob", 87)
```

```cpp
#include <unordered_map>
#include <unordered_set>

int main() {
    std::unordered_map<std::string, int> umap;
    umap["Alice"] = 95;   // O(1) average

    std::unordered_set<int> uset = {5, 1, 8, 3};
    uset.count(5);         // O(1) average
    uset.insert(10);       // O(1) average
    return 0;
}
```

---

## Derived (Container Adapters)

These are **not standalone containers** — they wrap sequence containers and restrict their interface to model real-world data structures.

### `std::stack` — LIFO

```
PUSH ──►  ┌─────┐
          │  40 │ ← TOP
          ├─────┤
          │  30 │
          ├─────┤
          │  20 │
          ├─────┤
          │  10 │ ← BOTTOM
          └─────┘
              │
           POP ◄──
```

```mermaid
sequenceDiagram
    participant U as User
    participant S as Stack

    U->>S: push(10)
    U->>S: push(20)
    U->>S: push(30)
    S-->>U: top() = 30
    U->>S: pop()
    S-->>U: top() = 20
```

```cpp
#include <stack>

int main() {
    std::stack<int> st;
    st.push(10);  // [10]
    st.push(20);  // [10, 20]
    st.push(30);  // [10, 20, 30]

    st.top();     // 30 — peek without removing
    st.pop();     // removes 30
    st.size();    // 2
    st.empty();   // false
    return 0;
}
```

> **Default underlying container:** `std::deque`. Can be changed to `std::vector` or `std::list`.

### `std::queue` — FIFO

```
ENQUEUE ──►  ┌────┬────┬────┬────┐  ──► DEQUEUE
             │ 10 │ 20 │ 30 │ 40 │
             └────┴────┴────┴────┘
              BACK               FRONT
```

```cpp
#include <queue>

int main() {
    std::queue<int> q;
    q.push(10);   // enqueue
    q.push(20);
    q.push(30);

    q.front();    // 10 — peek at front
    q.back();     // 30 — peek at back
    q.pop();      // removes 10 (FIFO)
    return 0;
}
```

### `std::priority_queue` — Heap

The **highest priority element** is always at the top (max-heap by default).

```
     [100]          ← Always at top (max)
    /     \
  [75]   [80]
  /  \
[30] [50]
```

```cpp
#include <queue>
#include <vector>
#include <functional>

int main() {
    // Max-heap (default)
    std::priority_queue<int> pq;
    pq.push(30);
    pq.push(100);
    pq.push(50);
    pq.top();   // 100 — always the max

    // Min-heap
    std::priority_queue<int, std::vector<int>, std::greater<int>> min_pq;
    min_pq.push(30);
    min_pq.push(100);
    min_pq.push(50);
    min_pq.top();  // 30 — always the min

    return 0;
}
```

---

## Complexity Comparison Table

### Sequence Containers

| Operation | `vector` | `list` | `deque` | `array` | `forward_list` |
|-----------|----------|--------|---------|---------|----------------|
| Random Access `[]` | ✅ O(1) | ❌ O(n) | ✅ O(1) | ✅ O(1) | ❌ O(n) |
| Insert at Front | ❌ O(n) | ✅ O(1) | ✅ O(1) | ❌ N/A | ✅ O(1) |
| Insert at Back | ✅ O(1)* | ✅ O(1) | ✅ O(1) | ❌ N/A | ❌ O(n) |
| Insert in Middle | ❌ O(n) | ✅ O(1)† | ❌ O(n) | ❌ N/A | ✅ O(1)† |
| Delete at Front | ❌ O(n) | ✅ O(1) | ✅ O(1) | ❌ N/A | ✅ O(1) |
| Delete at Back | ✅ O(1) | ✅ O(1) | ✅ O(1) | ❌ N/A | ❌ O(n) |
| Search | ❌ O(n) | ❌ O(n) | ❌ O(n) | ❌ O(n) | ❌ O(n) |
| Memory Layout | Contiguous | Non-contiguous | Segmented | Contiguous | Non-contiguous |
| Cache Friendly | ✅ Yes | ❌ No | ⚠️ Partial | ✅ Yes | ❌ No |
| Size Fixed? | ❌ No | ❌ No | ❌ No | ✅ Yes | ❌ No |

> \* Amortized O(1) — occasionally O(n) due to reallocation
> † O(1) only when you already have the iterator; finding the position is O(n)

### Ordered Associative Containers

| Operation | `set/multiset` | `map/multimap` |
|-----------|---------------|----------------|
| Insert | O(log n) | O(log n) |
| Delete | O(log n) | O(log n) |
| Search | O(log n) | O(log n) |
| Min / Max | O(log n) | O(log n) |
| Sorted Order | ✅ Yes | ✅ Yes (by key) |
| Duplicates | `set`: No / `multiset`: Yes | `map`: No / `multimap`: Yes |
| Underlying Structure | Red-Black Tree | Red-Black Tree |

### Unordered Associative Containers

| Operation | `unordered_set` | `unordered_map` |
|-----------|----------------|-----------------|
| Insert | O(1) avg, O(n) worst | O(1) avg, O(n) worst |
| Delete | O(1) avg, O(n) worst | O(1) avg, O(n) worst |
| Search | O(1) avg, O(n) worst | O(1) avg, O(n) worst |
| Sorted Order | ❌ No | ❌ No |
| Underlying Structure | Hash Table | Hash Table |

### Container Adapters

| Operation | `stack` | `queue` | `priority_queue` |
|-----------|---------|---------|-----------------|
| Insert | O(1) | O(1) | O(log n) |
| Remove | O(1) | O(1) | O(log n) |
| Peek (top/front) | O(1) | O(1) | O(1) |
| Order | LIFO | FIFO | By Priority |
| Random Access | ❌ | ❌ | ❌ |

---

## When to Use Which Container?

```mermaid
flowchart TD
    START(["What do you need?"]) --> Q1{"Need key-value\npairs?"}

    Q1 -->|Yes| Q2{"Need sorted\norder?"}
    Q1 -->|No| Q3{"Need unique\nelements only?"}

    Q2 -->|Yes| MAP["🗺️ std::map\nor multimap"]
    Q2 -->|No| UMAP["⚡ std::unordered_map\n(faster avg)"]

    Q3 -->|Yes| Q4{"Need sorted\norder?"}
    Q3 -->|No| Q5{"Access pattern?"}

    Q4 -->|Yes| SET["🌳 std::set"]
    Q4 -->|No| USET["⚡ std::unordered_set"]

    Q5 --> Q6{"Frequent\nrandom access?"}

    Q6 -->|Yes| Q7{"Insert/delete\nat ends only?"}
    Q6 -->|No| Q8{"Insert/delete\nin middle often?"}

    Q7 -->|Front & Back| DEQUE["📦 std::deque"]
    Q7 -->|Back only| VECTOR["📦 std::vector\n(best default)"]

    Q8 -->|Yes| LIST["🔗 std::list"]
    Q8 -->|No| VECTOR2["📦 std::vector\n(best default)"]

    Q3 -->|LIFO needed| STACK["📚 std::stack"]
    Q3 -->|FIFO needed| QUEUE["🚶 std::queue"]
    Q3 -->|Priority needed| PQ["🏆 std::priority_queue"]

    style START fill:#1e1e2e,color:#cdd6f4,stroke:#89b4fa
    style VECTOR fill:#1a3d2b,color:#cdd6f4,stroke:#a6e3a1
    style VECTOR2 fill:#1a3d2b,color:#cdd6f4,stroke:#a6e3a1
    style MAP fill:#1e3a5f,color:#cdd6f4,stroke:#89dceb
    style UMAP fill:#3d2010,color:#cdd6f4,stroke:#fab387
    style SET fill:#1e3a5f,color:#cdd6f4,stroke:#89dceb
    style USET fill:#3d2010,color:#cdd6f4,stroke:#fab387
```

### Quick Decision Summary

| Use Case | Best Container |
|----------|---------------|
| Default dynamic array | `std::vector` |
| Frequent insert/delete anywhere | `std::list` |
| Fast insert/delete at both ends | `std::deque` |
| Fixed-size array with STL API | `std::array` |
| Unique sorted elements | `std::set` |
| Key-value sorted lookup | `std::map` |
| Fastest lookup (no ordering needed) | `std::unordered_map` |
| Undo/redo functionality | `std::stack` |
| Task scheduling / BFS | `std::queue` |
| Priority-based scheduling | `std::priority_queue` |
| LRU Cache implementation | `std::list` + `std::unordered_map` |
| Frequency counter | `std::unordered_map<T, int>` |

---

## Internal Data Structures

```mermaid
graph LR
    subgraph CONT["Container → Underlying Structure"]
        V3["vector"] -->|"Dynamic Array"| DA["Contiguous Block\n[ ][ ][ ][ ]"]
        L3["list"] -->|"Doubly Linked"| DLL["Node↔Node↔Node"]
        FL3["forward_list"] -->|"Singly Linked"| SLL["Node→Node→Node"]
        DQ3["deque"] -->|"Array of Arrays"| AOA["[blk][blk][blk]"]

        S3["set / map"] -->|"Red-Black Tree"| RBT["Balanced BST\nO(log n) all ops"]
        US3["unordered_set\nunordered_map"] -->|"Hash Table"| HT["Buckets + Chaining\nO(1) avg"]

        ST3["stack"] -->|"Wraps deque"| DQ3
        Q3["queue"] -->|"Wraps deque"| DQ3
        PQ3["priority_queue"] -->|"Wraps vector (heap)"| V3
    end
```

---

## Header File Reference

| Container | Header |
|-----------|--------|
| `vector` | `#include <vector>` |
| `list` | `#include <list>` |
| `forward_list` | `#include <forward_list>` |
| `deque` | `#include <deque>` |
| `array` | `#include <array>` |
| `set`, `multiset` | `#include <set>` |
| `map`, `multimap` | `#include <map>` |
| `unordered_set`, `unordered_multiset` | `#include <unordered_set>` |
| `unordered_map`, `unordered_multimap` | `#include <unordered_map>` |
| `stack` | `#include <stack>` |
| `queue`, `priority_queue` | `#include <queue>` |

---

## Quick Code Examples

### Iterating Any Container with Range-Based For

```cpp
#include <vector>
#include <map>
#include <set>

// Vector
std::vector<int> v = {1, 2, 3};
for (const auto& x : v) std::cout << x << " ";

// Set (always sorted output)
std::set<int> s = {5, 3, 1};
for (const auto& x : s) std::cout << x << " ";  // 1 3 5

// Map
std::map<std::string, int> m = {{"a", 1}, {"b", 2}};
for (const auto& [key, val] : m) std::cout << key << ":" << val;
```

### Common Algorithms on Containers

```cpp
#include <vector>
#include <algorithm>
#include <numeric>

std::vector<int> v = {5, 2, 8, 1, 9};

std::sort(v.begin(), v.end());              // {1, 2, 5, 8, 9}
std::reverse(v.begin(), v.end());           // {9, 8, 5, 2, 1}
auto it = std::find(v.begin(), v.end(), 5); // iterator to 5
int sum = std::accumulate(v.begin(), v.end(), 0); // 25
std::binary_search(v.begin(), v.end(), 8); // true (must be sorted)
```

### Emplace vs Insert (Efficiency Tip)

```cpp
std::vector<std::pair<int, std::string>> v;

// insert — constructs then copies/moves
v.push_back({1, "hello"});

// emplace — constructs in-place (faster, avoids temporary)
v.emplace_back(1, "hello");

std::map<int, std::string> m;
m.insert({1, "hello"});    // constructs pair, then inserts
m.emplace(1, "hello");     // in-place construction (preferred)
```

---

## Summary

```mermaid
graph TB
    subgraph A["📊 Performance at a Glance"]
        direction LR
        FAST_ACCESS["⚡ Fastest Random Access\nvector, array, deque"]
        FAST_INSERT["⚡ Fastest Insert/Delete\nlist (middle)\ndeque, vector (ends)"]
        FAST_LOOKUP["⚡ Fastest Lookup\nunordered_map / unordered_set O(1)"]
        SORTED["🔃 Always Sorted\nset, map, multiset, multimap"]
        SPECIAL["🎯 Special Purpose\nstack (LIFO), queue (FIFO)\npriority_queue (heap)"]
    end
```

| Container Type | Key Strength | Key Weakness |
|----------------|-------------|--------------|
| `vector` | Cache-friendly, fast random access | Slow insert in middle |
| `list` | Fast insert/delete anywhere | No random access, poor cache |
| `deque` | Fast at both ends + random access | Slightly slower than vector |
| `set/map` | Always sorted, O(log n) everything | Slower than unordered variants |
| `unordered_set/map` | O(1) average operations | No ordering, hash collisions |
| `stack/queue` | Simple, purpose-built | No iteration or random access |

---

> 📁 **Next Tutorial:** Iterators in STL — Types, Arithmetic & Usage
> 🔗 **Previous Tutorial:** Introduction to STL — Components Overview

---

*Reference: ISO C++ Standard | cppreference.com | C++ Primer (5th Edition)*
