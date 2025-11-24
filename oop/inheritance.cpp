#include <iostream>
#include <string>
// Base class
class Vehicle
{
public:
    int speed;
    int wheels;

    void startEngine()
    {
        std::cout << "Engine starting..." << std::endl;
    }
};

// Derived class
class Car : public Vehicle
{
public:
    std::string model;

    void drive()
    {
        std::cout << "Driving the " << model << std::endl;
    }
};

// Another derived class
class Bicycle : public Vehicle
{
public:
    void pedal()
    {
        std::cout << "Pedaling the bicycle" << std::endl;
    }
};

int main()
{
    Car myCar;
    myCar.speed = 120;
    myCar.wheels = 4;
    myCar.model = "Toyota Camry";

    myCar.startEngine(); // Inherited method
    myCar.drive();       // Car's own method

    return 0;
}