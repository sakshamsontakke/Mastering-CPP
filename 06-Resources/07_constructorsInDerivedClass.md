# 🏗️ Constructors in Derived Classes in C++

> A beginner-friendly guide to understanding how constructors work across inheritance hierarchies.

---

## 📋 Table of Contents

- [What Are Constructors in Derived Classes?](#what-are-constructors-in-derived-classes)
- [Case 1 — Base Class Has No Arguments](#case-1--base-class-has-no-arguments)
- [Case 2 — Base Class Has Arguments](#case-2--base-class-has-arguments)
- [Constructors in Multiple Inheritance](#constructors-in-multiple-inheritance)
- [Constructors in Multilevel Inheritance](#constructors-in-multilevel-inheritance)
- [Special Syntax for Passing Arguments](#special-syntax-for-passing-arguments)
- [Special Case — Virtual Base Class](#special-case--virtual-base-class)
- [Quick Summary](#quick-summary)

---

## What Are Constructors in Derived Classes?

When a class inherits from another, constructors are chained — the **base class constructor always runs before the derived class constructor**.

```mermaid
flowchart TD
    A["🔵 Base Class Constructor\nruns FIRST"]
    B["🟢 Derived Class Constructor\nruns AFTER"]
    A --> B

    style A fill:#457b9d,stroke:#1d3557,color:#fff
    style B fill:#2a9d8f,stroke:#264653,color:#fff
```

The key rules depend on whether the base class constructor takes **arguments or not**.

---

## Case 1 — Base Class Has No Arguments

If the base class constructor has **no parameters**, the derived class doesn't need to do anything special. C++ calls the base constructor automatically.

```mermaid
flowchart LR
    A["Base()\nno args needed"]
    B["Derived()\nno args needed"]
    A -->|"called automatically ✅"| B

    style A fill:#457b9d,stroke:#1d3557,color:#fff
    style B fill:#2a9d8f,stroke:#264653,color:#fff
```

```cpp
#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base constructor called\n";
    }
};

class Derived : public Base {
public:
    Derived() {
        // Base() is called automatically — no special syntax needed
        cout << "Derived constructor called\n";
    }
};

int main() {
    Derived d;
    return 0;
}
```

Output:
```
Base constructor called
Derived constructor called
```

---

## Case 2 — Base Class Has Arguments

If the base class constructor **requires arguments**, the derived class **must explicitly pass them** using an initializer list.

```mermaid
flowchart TD
    User["👤 Derived d(10, 20)"]
    DC["Derived(int a, int b)\nreceives ALL args at once"]
    BC["Base(int a)\nreceives its args from Derived"]
    Body["Derived constructor body\n{ ... } runs last"]

    User --> DC
    DC -->|"passes 'a' to Base"| BC
    BC --> Body

    style User fill:#e9c46a,stroke:#f4a261,color:#000
    style DC fill:#2a9d8f,stroke:#264653,color:#fff
    style BC fill:#457b9d,stroke:#1d3557,color:#fff
    style Body fill:#6d6875,stroke:#4a4453,color:#fff
```

```cpp
#include <iostream>
using namespace std;

class Base {
public:
    int x;
    Base(int a) : x(a) {
        cout << "Base constructor: x = " << x << "\n";
    }
};

class Derived : public Base {
public:
    int y;
    //              👇 pass 'a' up to Base
    Derived(int a, int b) : Base(a), y(b) {
        cout << "Derived constructor: y = " << y << "\n";
    }
};

int main() {
    Derived d(10, 20);
    return 0;
}
```

Output:
```
Base constructor: x = 10
Derived constructor: y = 20
```

> 💡 **Key Rule:** The derived class receives **all arguments at once**, then passes the relevant ones to the base class via the initializer list. The body of the derived constructor runs only after the base constructor finishes.

---

## Constructors in Multiple Inheritance

When a class inherits from **multiple base classes**, constructors are called in the **order the base classes are declared**.

```mermaid
graph TD
    A["🅰️ Class A"]
    B["🅱️ Class B"]
    C["🅰️🅱️ Class C\ninherits A then B"]

    A --> C
    B --> C

    style A fill:#e63946,stroke:#c1121f,color:#fff
    style B fill:#457b9d,stroke:#1d3557,color:#fff
    style C fill:#2a9d8f,stroke:#264653,color:#fff
```

### Order depends on declaration — not the initializer list!

```mermaid
flowchart LR
    subgraph order1["class C : public A, public B"]
        direction LR
        X1["1️⃣ A()"] --> X2["2️⃣ B()"] --> X3["3️⃣ C()"]
    end
    subgraph order2["class C : public B, public A"]
        direction LR
        Y1["1️⃣ B()"] --> Y2["2️⃣ A()"] --> Y3["3️⃣ C()"]
    end

    style X1 fill:#e63946,stroke:#c1121f,color:#fff
    style X2 fill:#457b9d,stroke:#1d3557,color:#fff
    style X3 fill:#2a9d8f,stroke:#264653,color:#fff
    style Y1 fill:#457b9d,stroke:#1d3557,color:#fff
    style Y2 fill:#e63946,stroke:#c1121f,color:#fff
    style Y3 fill:#2a9d8f,stroke:#264653,color:#fff
```

```cpp
#include <iostream>
using namespace std;

class A {
public:
    A() { cout << "Constructor A\n"; }
};

class B {
public:
    B() { cout << "Constructor B\n"; }
};

// A is listed before B → A's constructor runs first
class C : public A, public B {
public:
    C() { cout << "Constructor C\n"; }
};

int main() {
    C obj;
    return 0;
}
```

Output:
```
Constructor A    ← listed first
Constructor B    ← listed second
Constructor C    ← derived, always last
```

> ⚠️ **Watch out:** The order in the **class declaration** (`class C : public A, public B`) controls execution order — not the order in `C`'s initializer list.

---

## Constructors in Multilevel Inheritance

In multilevel inheritance (a chain: `A → B → C`), constructors are called from the **topmost base down to the most derived**.

```mermaid
graph TD
    A["🅰️ Class A\n(grandparent)"]
    B["🅱️ Class B\n(parent)\ninherits A"]
    C["🅲 Class C\n(child)\ninherits B"]

    A --> B --> C

    style A fill:#e63946,stroke:#c1121f,color:#fff
    style B fill:#457b9d,stroke:#1d3557,color:#fff
    style C fill:#2a9d8f,stroke:#264653,color:#fff
```

```mermaid
flowchart LR
    A["1️⃣ A()\ngrandparent first"]
    B["2️⃣ B()\nparent second"]
    C["3️⃣ C()\nchild last"]

    A --> B --> C

    style A fill:#e63946,stroke:#c1121f,color:#fff
    style B fill:#457b9d,stroke:#1d3557,color:#fff
    style C fill:#2a9d8f,stroke:#264653,color:#fff
```

```cpp
#include <iostream>
using namespace std;

class A {
public:
    A() { cout << "Constructor A (grandparent)\n"; }
};

class B : public A {
public:
    B() { cout << "Constructor B (parent)\n"; }
};

class C : public B {
public:
    C() { cout << "Constructor C (child)\n"; }
};

int main() {
    C obj;
    return 0;
}
```

Output:
```
Constructor A (grandparent)   ← top of chain
Constructor B (parent)
Constructor C (child)         ← bottom of chain
```

---

## Special Syntax for Passing Arguments

C++ provides a clean syntax for passing arguments to **multiple base classes at once**.

### Syntax

```cpp
DerivedConstructor(arg1, arg2, arg3, ...) : Base1Constructor(arg1, arg2), Base2Constructor(arg3, arg4)
{
    // body runs after ALL base constructors finish
}
```

```mermaid
flowchart TD
    Call["👤 C(1, 2, 3, 4) called"]
    DC["Derived C receives\nall 4 args at once"]
    B1["Base1(1, 2)\nconstructor runs"]
    B2["Base2(3, 4)\nconstructor runs"]
    Body["C body { ... }\nruns last"]

    Call --> DC
    DC -->|"arg1, arg2"| B1
    DC -->|"arg3, arg4"| B2
    B1 --> Body
    B2 --> Body

    style Call fill:#e9c46a,stroke:#f4a261,color:#000
    style DC fill:#6d6875,stroke:#4a4453,color:#fff
    style B1 fill:#e63946,stroke:#c1121f,color:#fff
    style B2 fill:#457b9d,stroke:#1d3557,color:#fff
    style Body fill:#2a9d8f,stroke:#264653,color:#fff
```

```cpp
#include <iostream>
using namespace std;

class Base1 {
public:
    int x;
    Base1(int a) : x(a) {
        cout << "Base1 constructor: x = " << x << "\n";
    }
};

class Base2 {
public:
    int y;
    Base2(int b) : y(b) {
        cout << "Base2 constructor: y = " << y << "\n";
    }
};

class Derived : public Base1, public Base2 {
public:
    int z;
    //            receives all args 👇       passes them 👇
    Derived(int a, int b, int c) : Base1(a), Base2(b), z(c) {
        cout << "Derived constructor: z = " << z << "\n";
    }
};

int main() {
    Derived d(10, 20, 30);
    return 0;
}
```

Output:
```
Base1 constructor: x = 10
Base2 constructor: y = 20
Derived constructor: z = 30
```

---

## Special Case — Virtual Base Class

When **virtual base classes** are involved, the constructor order changes:

```mermaid
flowchart TD
    V1["1️⃣ Virtual Base Classes\n(in order declared)"]
    V2["2️⃣ Non-Virtual Base Classes\n(in order declared)"]
    V3["3️⃣ Derived Class Constructor\n(last)"]

    V1 --> V2 --> V3

    style V1 fill:#e63946,stroke:#c1121f,color:#fff
    style V2 fill:#457b9d,stroke:#1d3557,color:#fff
    style V3 fill:#2a9d8f,stroke:#264653,color:#fff
```

### Rules:
- **Virtual base classes** are always constructed **before** non-virtual base classes
- If there are **multiple virtual bases**, they are constructed in **declaration order**
- **Non-virtual base classes** are constructed next
- Finally, the **derived class** constructor body runs

```mermaid
flowchart LR
    subgraph Example["class D : public B, public C\nB inherits virtual A\nC inherits virtual A"]
        direction LR
        S1["1️⃣ A()\nvirtual base"] --> S2["2️⃣ B()\nnon-virtual"] --> S3["3️⃣ C()\nnon-virtual"] --> S4["4️⃣ D()\nderived"]
    end

    style S1 fill:#e63946,stroke:#c1121f,color:#fff
    style S2 fill:#457b9d,stroke:#1d3557,color:#fff
    style S3 fill:#457b9d,stroke:#1d3557,color:#fff
    style S4 fill:#2a9d8f,stroke:#264653,color:#fff
```

```cpp
#include <iostream>
using namespace std;

class A {
public:
    A() { cout << "1. Virtual Base A\n"; }
};

class B : virtual public A {
public:
    B() { cout << "2. Class B (non-virtual)\n"; }
};

class C : virtual public A {
public:
    C() { cout << "3. Class C (non-virtual)\n"; }
};

class D : public B, public C {
public:
    D() { cout << "4. Derived Class D\n"; }
};

int main() {
    D obj;
    return 0;
}
```

Output:
```
1. Virtual Base A       ← virtual base, always first
2. Class B (non-virtual)
3. Class C (non-virtual)
4. Derived Class D      ← always last
```

---

## Quick Summary

```mermaid
flowchart TD
    Q1{"Does base class\nhave constructor args?"}
    Q2["No special syntax needed\nBase() called automatically ✅"]
    Q3["Use initializer list\nDerived(args) : Base(args) { }"]

    Q1 -->|"No"| Q2
    Q1 -->|"Yes"| Q3

    style Q2 fill:#2a9d8f,stroke:#264653,color:#fff
    style Q3 fill:#457b9d,stroke:#1d3557,color:#fff
```

| Scenario | Constructor Execution Order |
|---|---|
| Simple inheritance | Base → Derived |
| Multiple inheritance | Base1 → Base2 → Derived *(declaration order)* |
| Multilevel inheritance | Grandparent → Parent → Child |
| With virtual base | Virtual Base → Non-virtual Bases → Derived |

### Key Takeaways

- 🔵 **Base constructor always runs before derived** — no exceptions
- 📋 **In multiple inheritance**, order = declaration order in the class header
- 🔗 **In multilevel inheritance**, constructors chain from top to bottom
- 📨 **Derived class receives all args**, then distributes them via initializer list
- ⚡ **Virtual base classes** jump to the front of the construction queue

---

*Happy coding! 🏗️ If this helped, consider starring the repo.*
