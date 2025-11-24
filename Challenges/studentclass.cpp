#include <iostream>
#include <string>

class Student
{
public:
    // Attributes
    int age;
    std::string name;

    // Method to display student information
    void display()
    {
        std::cout << "Name:" << name << std::endl;
        std::cout << "Age:" << age << std::endl;
    }
};
int main()
{
    // 1. Create an object (instance) of the student class
    Student studennt1;

    // 2. Assign values to the attributes
    studennt1.name = "Fred";
    studennt1.age = 20;

    // 2. Call the display method
    studennt1.display();
}