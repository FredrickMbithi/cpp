#include <iostream>
#include <string>

class StockOrder
{
private:
    // 1. Define private attributes here (ticker, price, shares)
    std::string ticker;
    double price;
    int shares;

public:
    // 2. Create a Constructor to initialize the attributes
    // Hint: The constructor name must match the Class name

    StockOrder(std::string t, double p, int s)
    {
        // Assign the arguments to the attributes

        ticker = t;
    }

    // 3. Implement the calculateCost method
    double calculateCost()
    {
        // Return price * shares
    }

    void display()
    {
        std::cout << "Order: " << ticker << std::endl;
        std::cout << "Execution Price: $" << price << std::endl;
    }
};

int main()
{
    // 4. Create an object using the Constructor
    // Syntax: ClassName objectName(value1, value2, value3);
    StockOrder myOrder("AAPL", 150.50, 10);

    // This calculates and prints the total
    std::cout << "Total Order Cost: $" << myOrder.calculateCost() << std::endl;

    // TRY THIS: Uncomment the line below. It should cause an error!
    // myOrder.price = 0;

    return 0;
}