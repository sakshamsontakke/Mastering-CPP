# Object-Oriented Programming in C++

## Introduction

Object-Oriented Programming (OOP) is one of the most important paradigms in modern programming.

C++ was designed with the primary intention of extending C with Object-Oriented Programming features.

OOP helps in managing large and complex software systems by organizing programs around **objects** rather than functions.

---

# Why Object-Oriented Programming?

As the size of a program increases:

* Readability decreases
* Maintainability decreases
* Debugging becomes harder
* Data security becomes weaker

This was one of the major limitations of Procedural Programming Languages like C.

Since procedural programming mainly focuses on functions, the data was almost neglected and moved openly from function to function, making security difficult.

Object-Oriented Programming solves these problems by modeling programs as real-world entities.

---

# Real World Visualization

```mermaid
graph LR
    Person --> Car
    Car --> Engine
    Person --> BankAccount
    Person --> MobilePhone
```

Everything in the real world is an object having:

* Properties (Data)
* Behaviors (Functions)

Similarly, OOP models software around objects.

---

# Procedure Oriented Programming vs Object-Oriented Programming

## Procedure Oriented Programming (POP)

### Characteristics

* Consists of writing instructions for the computer.
* Main focus is on functions.
* Data moves freely between functions.
* Uses local and global variables.
* Data security is weak.

### Visualization

```mermaid
graph LR
    Function1 --> Data
    Data --> Function2
    Function2 --> Function3
    Function3 --> Data
```

### Problems

* Large programs become difficult to manage.
* Debugging becomes complicated.
* Data is exposed to all functions.
* Low code reusability.

---

## Object-Oriented Programming (OOP)

### Characteristics

* Works on Classes and Objects.
* Treats data as a critical element.
* Wraps data and functions together.
* Promotes data hiding and security.
* Models real-world scenarios.

### Visualization

```mermaid
graph TD
    Class --> Object1
    Class --> Object2
    Class --> Object3
```

Objects contain both:

* Data
* Functions

---

# Difference Between POP and OOP

| Procedure Oriented Programming | Object-Oriented Programming |
| ------------------------------ | --------------------------- |
| Focuses on Functions           | Focuses on Objects          |
| Data moves freely              | Data is protected           |
| Less secure                    | More secure                 |
| Difficult for large programs   | Suitable for large projects |
| Less reusable                  | Highly reusable             |
| Top-down approach              | Bottom-up approach          |
| Data is global                 | Data is encapsulated        |

---

# Basic Concepts of Object-Oriented Programming

There are six major pillars of OOP:

```mermaid
mindmap
  root((OOP))
    Classes
    Objects
    Encapsulation
    Inheritance
    Polymorphism
    Dynamic Binding
    Message Passing
```

---

# 1. Classes

A class is a blueprint or template for creating objects.

It defines:

* Data members
* Member functions

### Visualization

```mermaid
graph TD
    Class --> Object1
    Class --> Object2
    Class --> Object3
```

Example:

```text
Class : Car

Properties:
- Color
- Speed
- Model

Functions:
- Start()
- Brake()
```

---

# 2. Objects

Objects are runtime entities created from classes.

### Visualization

```mermaid
graph TD
    CarClass --> BMW
    CarClass --> Audi
    CarClass --> Ferrari
```

Each object has:

* Its own data
* Access to class functions

---

# 3. Encapsulation

Encapsulation means wrapping data and functions into a single unit.

It helps achieve:

* Data Hiding
* Security
* Better organization

### Visualization

```mermaid
graph TD
    Class["Class"]
    Data["Data"]
    Functions["Functions"]

    Class --> Data
    Class --> Functions
```

Example:

```text
Bank Account

Data:
- Balance

Functions:
- Deposit()
- Withdraw()
```

Users cannot directly access the balance.

---

# 4. Inheritance

Inheritance allows one class to acquire properties and functionalities of another class.

### Visualization

```mermaid
graph TD
    Employee --> Programmer
```

Benefits:

* Code Reusability
* Reduced Redundancy
* Easy Maintenance

---

# 5. Polymorphism

Polymorphism means "Many Forms".

A single interface can perform different tasks.

### Visualization

```mermaid
graph TD
    Animal --> Dog
    Animal --> Cat
    Animal --> Cow
```

Each object can have different behavior.

Example:

```text
Speak()

Dog → Bark
Cat → Meow
Cow → Moo
```

---

# 6. Dynamic Binding

Dynamic Binding means the function to be executed is determined at runtime.

### Visualization

```mermaid
graph TD
    BasePointer --> Object1
    BasePointer --> Object2
    BasePointer --> Object3
```

The compiler decides which function to execute while the program runs.

Used in:

* Runtime Polymorphism
* Virtual Functions

---

# 7. Message Passing

Objects communicate with each other by sending messages.

### Visualization

```mermaid
sequenceDiagram
    User->>ATM: Withdraw Money
    ATM->>Bank: Request Balance
    Bank-->>ATM: Balance Information
    ATM-->>User: Cash
```

Information is exchanged through function calls.

---

# OOP Relationship

```mermaid
graph TD

Class --> Object

Object --> Encapsulation
Object --> Inheritance
Object --> Polymorphism

Polymorphism --> DynamicBinding

Object --> MessagePassing
```

---

# Benefits of Object-Oriented Programming

## 1. Code Reusability

Inheritance allows reuse of existing code.

```mermaid
graph TD
    Employee --> Programmer
    Employee --> Manager
```

---

## 2. Data Security

Encapsulation and data hiding protect sensitive information.

```mermaid
graph TD
    User --> PublicFunctions
    PublicFunctions --> PrivateData
```

Users cannot directly modify private data.

---

## 3. Multiple Objects Can Coexist

Different objects work independently.

```mermaid
graph LR
    Car1
    Car2
    Car3
```

Each object maintains its own state.

---

## 4. Easier Software Management

Large projects can be divided into smaller classes.

```mermaid
graph TD
    Project --> UserClass
    Project --> DatabaseClass
    Project --> AuthenticationClass
    Project --> PaymentClass
```

This makes development easier.

---

# POP vs OOP Summary

```mermaid
graph TD

POP["Procedure Oriented Programming"]
OOP["Object Oriented Programming"]

POP --> Functions
POP --> GlobalData
POP --> LessSecurity

OOP --> Classes
OOP --> Objects
OOP --> Encapsulation
OOP --> Inheritance
OOP --> Polymorphism
```

---

# One-Line Definition

> Object-Oriented Programming is a programming paradigm that organizes software around objects containing both data and functions, making programs reusable, secure, maintainable, and closer to real-world modeling.
