#include <iostream>
class Account
{
private:
    double balance;

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

int main()
{
    Account myAccount;
    myAccount.deposit(500, 0);
}