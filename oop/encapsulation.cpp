#include <iostream>
#include <string>
class BankAccount
{
private:
    double balance; // Hidden from outside

public:
    // Constructor
    BankAccount(double initialBalance) : balance(initialBalance) {}

    // Controlled access through methods
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            std::cout << "Deposited: $" << amount << std::endl;
        }
    }

    bool withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            std::cout << "Withdrew: $" << amount << std::endl;
            return true;
        }
        std::cout << "Insufficient funds!" << std::endl;
        return false;
    }

    double getBalance() const
    {
        return balance;
    }
};

int main()
{
    BankAccount myAccount(1000.0);

    // myAccount.balance = 5000;  // ERROR: balance is private!

    myAccount.deposit(500);
    myAccount.withdraw(200);
    std::cout << "Balance: $" << myAccount.getBalance() << std::endl;

    return 0;
}