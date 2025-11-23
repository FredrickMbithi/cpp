#include <iostream>
#include <string>

class car
{
public:
    // Attributes
    std::string color;
    std::string model;
    int year;

    // Methods
    void startengine()
    {
        std::cout << "Engine started!" << std::endl;
    }
    void honkHorn()
    {
        std::cout << "Beep beep!" << std::endl;
    }
};
int main()
{
    // Creating objects
    car myCar;
    myCar.color = "Red";
    myCar.model = "Toyota";
    myCar.year = 2022;

    myCar.startengine();
    std::cout << "My car is a" << myCar.color << " " << myCar.model << std::endl;

    return 0;
}