#include <iostream>
#include <string>
class Animal
{
public:
    virtual void makeSound()
    {
        std::cout << "The animal makes a sound" << std::endl;
    }
};

class Dog : public Animal
{
public:
    void makeSound() override
    {
        std::cout << "The dog barks: Woof!" << std::endl;
    }
};

class Cat : public Animal
{
public:
    void makeSound() override
    {
        std::cout << "The cat meows: Meow!" << std::endl;
    }
};

int main()
{
    Animal *myAnimal;
    Dog myDog;
    Cat myCat;

    // Polymorphism in action
    myAnimal = &myDog;
    myAnimal->makeSound(); // Outputs: The dog barks: Woof!

    myAnimal = &myCat;
    myAnimal->makeSound(); // Outputs: The cat meows: Meow!

    return 0;
}