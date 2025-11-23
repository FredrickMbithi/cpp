#include <iostream>
class Account
{
private:
    double balance;
    int roll_number = 0;

public:
    // Method with one parameter
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            std::cout << "Deposited" << amount << std::endl;
        }
    }

    // Method with validation
    void setRollNumber(int newRollNumber)
    {
        if (newRollNumber > 0)
        {
            roll_number = newRollNumber;
        }
        else
        {
            std::cout << "Invalid roll number!" << std::endl;
        }
    }
};

// Usage:
int main()
{
    Account myAccount;
    myAccount.deposit(500.0); // Passes 500.0 as argument
}