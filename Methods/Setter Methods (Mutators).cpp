#include <iostream>
#include <string>
class Student
{
private:
    std::string name;

public:
    // Setter method - modifies private data
    void setName(const std::string &newName)
    {
        name = newName;
    }

    // Setter with validation
    void setOwnerName(const std::string &newName)
    {
        if (!newName.empty())
        {
            ownerName = newName;
        }
        else
        {
            std::cout << "Error: Name cannot be empty!" << std::endl;
        }
    }
};

// Usage:
Student s1;
s1.setName("Alice"); // Sets the name