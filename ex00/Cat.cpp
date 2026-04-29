#include "Cat.hpp"

//Constructors
Cat::Cat(void) : Animal("Cat")
{
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat Copy constructor called" << std::endl;
}
// Destructors
Cat::~Cat(void)
{
    std::cout << "Cat Destructor called" << std::endl;
}

// Overload Operators
Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat Assignment operator called" << std::endl;
    if(this != &other)
        Animal::operator=(other);
    return (*this);
}

// Public Methods
void Cat::makeSound(void) const
{
    std::cout << "¡Miau Miau Miau!" << std::endl;
}
// Getters

// Setters



