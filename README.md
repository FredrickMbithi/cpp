# C++ Programming Exercises

Collection of C++ programming exercises covering object-oriented programming, classes, methods, and problem-solving challenges.

## 📚 Repository Structure

```
cpp/
├── oop/                  # Object-Oriented Programming concepts
├── Classes and objects/  # Class definition and usage
├── Methods/             # Method implementation and overloading
└── Challenges/          # Programming challenges and exercises
```

## 🎯 Topics Covered

### 1. Object-Oriented Programming (`oop/`)
- Encapsulation
- Inheritance
- Polymorphism
- Abstraction
- Constructors and destructors

### 2. Classes and Objects
- Class declaration and definition
- Member variables and functions
- Access specifiers (public, private, protected)
- Object instantiation
- this pointer

### 3. Methods
- Method definition
- Method overloading
- Const methods
- Static methods
- Inline functions

### 4. Challenges
- Algorithm implementation
- Data structure exercises
- Problem-solving tasks

## 🚀 Quick Start

### Prerequisites
- C++ compiler (g++, clang++, or MSVC)
- Make (optional)

### Compilation

```bash
# Compile a single file
g++ -o program program.cpp

# Run
./program

# Compile with C++11/14/17
g++ -std=c++17 -o program program.cpp

# Compile with warnings
g++ -Wall -Wextra -o program program.cpp
```

## 📝 Example Code Patterns

### Class Definition

```cpp
// Person.h
#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Constructor
    Person(std::string n, int a);
    
    // Destructor
    ~Person();
    
    // Getters
    std::string getName() const;
    int getAge() const;
    
    // Setters
    void setName(std::string n);
    void setAge(int a);
    
    // Methods
    void display() const;
};

#endif
```

```cpp
// Person.cpp
#include "Person.h"
#include <iostream>

Person::Person(std::string n, int a) : name(n), age(a) {}

Person::~Person() {}

std::string Person::getName() const {
    return name;
}

int Person::getAge() const {
    return age;
}

void Person::setName(std::string n) {
    name = n;
}

void Person::setAge(int a) {
    if (a >= 0) {
        age = a;
    }
}

void Person::display() const {
    std::cout << "Name: " << name << ", Age: " << age << std::endl;
}
```

### Inheritance

```cpp
class Student : public Person {
private:
    std::string studentID;
    double GPA;

public:
    Student(std::string n, int a, std::string id, double gpa);
    
    std::string getStudentID() const;
    double getGPA() const;
    
    void display() const;  // Override
};
```

### Polymorphism

```cpp
class Shape {
public:
    virtual double area() const = 0;  // Pure virtual (abstract)
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}
    
    double area() const override {
        return 3.14159 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}
    
    double area() const override {
        return width * height;
    }
};
```

## 🧩 Common Exercise Types

### 1. Bank Account System
```cpp
class BankAccount {
private:
    std::string accountNumber;
    double balance;

public:
    BankAccount(std::string accNum, double initialBalance);
    void deposit(double amount);
    bool withdraw(double amount);
    double getBalance() const;
    void display() const;
};
```

### 2. Library Management
```cpp
class Book {
private:
    std::string title;
    std::string author;
    std::string ISBN;
    bool isAvailable;

public:
    Book(std::string t, std::string a, std::string isbn);
    void borrowBook();
    void returnBook();
    bool checkAvailability() const;
};
```

### 3. Student Record System
```cpp
class Course {
private:
    std::string courseName;
    std::string courseCode;
    int credits;

public:
    Course(std::string name, std::string code, int cr);
    void display() const;
};

class Student {
private:
    std::string name;
    std::vector<Course> courses;

public:
    void enrollCourse(const Course& course);
    void displayCourses() const;
};
```

## 🔑 Key C++ Concepts

### Memory Management
```cpp
// Stack allocation
Person p1("John", 25);

// Heap allocation
Person* p2 = new Person("Jane", 30);
delete p2;  // Manual cleanup required

// Smart pointers (C++11+)
std::unique_ptr<Person> p3 = std::make_unique<Person>("Bob", 35);
// Automatic cleanup
```

### Const Correctness
```cpp
class MyClass {
public:
    int getValue() const {  // Const method - doesn't modify object
        return value;
    }
    
    void setValue(int v) {  // Non-const method
        value = v;
    }

private:
    int value;
};
```

### Operator Overloading
```cpp
class Complex {
private:
    double real, imag;

public:
    Complex(double r, double i) : real(r), imag(i) {}
    
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }
    
    friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
        os << c.real << " + " << c.imag << "i";
        return os;
    }
};
```

## 🛠️ Development Best Practices

1. **Header Guards** — Prevent multiple inclusions
2. **Const Correctness** — Mark methods that don't modify state
3. **RAII** — Resource Acquisition Is Initialization
4. **Rule of Three/Five** — Manage copy/move operations
5. **Use `const` References** — Pass objects efficiently
6. **Avoid Raw Pointers** — Prefer smart pointers

## 📖 Compilation Tips

### Makefile Example
```makefile
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

SOURCES = main.cpp Person.cpp Student.cpp
OBJECTS = $(SOURCES:.cpp=.o)
TARGET = program

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJECTS) $(TARGET)
```

Run with:
```bash
make
./program
make clean
```

## 🧪 Testing

### Simple Test Example
```cpp
#include <cassert>

void testBankAccount() {
    BankAccount acc("12345", 1000.0);
    
    acc.deposit(500);
    assert(acc.getBalance() == 1500.0);
    
    acc.withdraw(200);
    assert(acc.getBalance() == 1300.0);
    
    std::cout << "All tests passed!" << std::endl;
}
```

## 📚 Learning Resources

**Official:**
- [cppreference.com](https://en.cppreference.com/)
- [C++ Language Tutorial](http://www.cplusplus.com/doc/tutorial/)

**Books:**
- "C++ Primer" by Stanley B. Lippman
- "Effective C++" by Scott Meyers
- "The C++ Programming Language" by Bjarne Stroustrup

**Practice:**
- [LeetCode](https://leetcode.com/)
- [HackerRank](https://www.hackerrank.com/)
- [Codewars](https://www.codewars.com/)

## 🎓 Educational Context

These exercises cover fundamental to intermediate C++ programming concepts typically taught in:
- CS1/CS2 university courses
- Software engineering bootcamps
- Self-study programs

## 📄 License

Educational projects - MIT License

## 👤 Author

Fredrick Mbithi

---

**Language:** C++ 11/14/17  
**Focus:** Object-Oriented Programming & Problem Solving  
**Compiler:** g++ / clang++ compatible
