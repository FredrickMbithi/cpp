#include <iostream>
#include <string>

// Abstract base class
class Shape
{
public:
    // Pure virtual function (= 0 makes it pure)
    virtual double calculateArea() = 0;

    // Virtual destructor
    virtual ~Shape() {}
};

// Concrete derived class
class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() override
    {
        return 3.14159 * radius * radius;
    }
};

// Another concrete class
class Rectangle : public Shape
{
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() override
    {
        return length * width;
    }
};

int main()
{
    // Shape myShape;  // ERROR: Cannot instantiate abstract class!

    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    Shape *shape1 = &circle;
    Shape *shape2 = &rectangle;

    std::cout << "Circle area: " << shape1->calculateArea() << std::endl;
    std::cout << "Rectangle area: " << shape2->calculateArea() << std::endl;

    return 0;
}