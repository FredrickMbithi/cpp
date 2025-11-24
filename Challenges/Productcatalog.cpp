#include <iostream>
#include <string>

class Product
{
public:
    // attributes
    double price;
    double quantity;
    std::string name;

    // Method 1: Display info (I added ": " for better spacing)
    void display()
    {
        std::cout << "Price" << price << std::endl;
        std::cout << "Quantity" << quantity << std::endl;
        std::cout << "Name" << name << std::endl;
    }
    // Method 2: Calculate Total Value (The missing requirement)
    double calculate_total_value()
    {
        return price * quantity;
    }
};

int main()
{
    // creating objects (instances)
    Product product1;
    // Passing values to the attributes
    product1.name = "Tea leaves";
    product1.price = 20;
    product1.quantity = 20;

    // 2. Call the display method
    product1.display();
    // call the new method
    double total = product1.calculate_total_value();
    std::cout << "Total Stock value: " << total << std::endl;

    return 0;
}