#include <iostream>

class Car
{
public:
    void startEngine()
    {
        std::cout << "Engine started!" << std::endl;
    }
    void honkHorn()
    {
        std::cout << "Beep beep!" << std::endl;
    }
};

// Usage:
int main()
{
    Car myCar;
    myCar.startEngine(); // Calls the method
    myCar.honkHorn();
}