#include "Dog.hpp"

//Constructors
Dog::Dog(void) : Animal("Dog")
{
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog Copy constructor called" << std::endl;
}
// Destructors
Dog::~Dog(void)
{
    std::cout << "Dog Destructor called" << std::endl;
}

// Overload Operators
Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog Assignment operator called" << std::endl;
    if(this != &other)
        Animal::operator=(other);
    return (*this);
}

// Public Methods
void Dog::makeSound(void) const
{
    std::cout << "¡Guau Guau Guau!" << std::endl;
}

// Getters

// Setters



