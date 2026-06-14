
# C++ SUMMARY

![C++](https://img.shields.io/badge/C%2B%2B-Notes-blue)

# Table of Contents

1. Basic Input / Output
2. Streams
3. Data Types
4. Reserved Keywords
5. Control Structures
6. If-Else Statements
7. Switch Case
8. Arrays
9. Pointers and Arrays
10. Pointer Arithmetic
11. Common Mistakes
12. Quick Revision

---

# Basic Input and Output

C++ performs input and output using streams.

## Stream Architecture

```mermaid
flowchart LR
Keyboard --> InputStream["Input Stream (cin)"]
InputStream --> Memory
Memory --> OutputStream["Output Stream (cout)"]
OutputStream --> Monitor
```

## Types of Streams

| Stream | Direction |
|----------|----------|
| Input Stream | Input Device → Memory |
| Output Stream | Memory → Output Device |

---

# Important Operators

| Operator | Name | Purpose |
|----------|------|------|
| << | Insertion Operator | Output |
| >> | Extraction Operator | Input |
| cout | Standard Output Object | Printing |
| cin | Standard Input Object | Runtime Input |
| endl | End Line | Newline + Flush |
| getline() | Input Function | String Input |

---

# Data Types

## Integer Types

| Type | Size | Signed Range |
|------|------|------|
| short | 2 Bytes | -32,768 to 32,767 |
| int | 4 Bytes | -2,147,483,648 to 2,147,483,647 |
| long | 4/8 Bytes | Platform dependent |
| long long | 8 Bytes | ±9.22 × 10^18 |

## Floating Types

| Type | Size | Precision |
|------|------|------|
| float | 4 Bytes | ~7 digits |
| double | 8 Bytes | ~15 digits |
| long double | 8-16 Bytes | Higher precision |

## Character Types

| Type | Size |
|------|------|
| char | 1 Byte |
| wchar_t | 2-4 Bytes |
| bool | 1 Byte |

---

# Complete Reserved Keywords

## Data Types

bool, char, int, short, long, float, double, void, signed, unsigned

## Control Statements

if, else, switch, case, default, break, continue, goto, return

## Loops

for, while, do

## OOP

class, struct, private, protected, public, friend, virtual, this

## Memory

new, delete

## Exception Handling

try, catch, throw

## Storage Classes

auto, register, static, extern, mutable

---

# Control Structures

```mermaid
flowchart TD
Start --> Sequence
Sequence --> Selection
Selection --> Loop
```

## Sequence Structure

Instructions execute one after another.

```mermaid
flowchart TD
A --> B
B --> C
```

## Selection Structure

```mermaid
flowchart TD
Condition -->|True| Statement1
Condition -->|False| Statement2
```

## Loop Structure

```mermaid
flowchart TD
Condition -->|True| Body
Body --> Condition
Condition -->|False| End
```

---

# If Else

```mermaid
flowchart TD
Condition{age < 18?}
Condition -->|Yes| A[Cannot Come]
Condition -->|No| B[Can Come]
```

Multiple else-if statements may be used.

---

# Switch Case

```mermaid
flowchart TD
Switch --> Case1
Switch --> Case2
Switch --> Default
```

Break exits the switch block.

---

# Arrays

Array = Collection of same type stored in contiguous memory.

```mermaid
flowchart LR
A0["marks[0]"]
A1["marks[1]"]
A2["marks[2]"]
A3["marks[3]"]

A0 --> A1 --> A2 --> A3
```

Properties:

- Fixed Size
- Contiguous Memory
- Index starts from 0

---

# Arrays and Loops

```mermaid
flowchart TD
Start --> i0
i0 --> Condition
Condition -->|True| Print
Print --> Increment
Increment --> Condition
Condition -->|False| End
```

---

# Pointers and Arrays

Array name stores address of first element.

```mermaid
flowchart LR
Pointer[p]
Pointer --> M0["marks[0]"]
M0 --> M1["marks[1]"]
M1 --> M2["marks[2]"]
M2 --> M3["marks[3]"]
```

marks = address of marks[0]

---

# Pointer Arithmetic

```mermaid
flowchart LR
P0["*p"]
P1["*(p+1)"]
P2["*(p+2)"]
P3["*(p+3)"]

P0 --> P1 --> P2 --> P3
```

| Expression | Meaning |
|------------|---------|
| *p | First Element |
| *(p+1) | Second Element |
| *(p+2) | Third Element |
| *(p+3) | Fourth Element |

---

# Common Mistakes

❌ Using &marks

✔ marks already stores address of first element

❌ Accessing beyond array size

✔ Always stay within bounds

❌ Forgetting break in switch

✔ Use break to avoid fall-through

---

# Quick Revision

```mermaid
mindmap
root((C++))
    Input Output
    Data Types
    Keywords
    Control Structures
    If Else
    Switch
    Arrays
    Pointers
    Pointer Arithmetic
```

