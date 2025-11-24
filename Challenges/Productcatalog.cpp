#include <iostream>
#include <string>

class Product
{
public:
    // attributes
    double price;
    double quantity;
    std::string name;

    void display()
    {
        std::cout << "Price" << price << std::endl;
        std::cout << "Quantity" << quantity << std::endl;
        std::cout << "Name" << name << std::endl;
    }
};

int main()
{
    // creating objects (instances)
}