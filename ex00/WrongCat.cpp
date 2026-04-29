#include "WrongCat.hpp"

//Constructors
WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
}
// Destructors
WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat Destructor called" << std::endl;
}

// Overload Operators
WrongCat &WrongCat::operator=(const WrongCat &other)
{
    std::cout << "WrongCat Assignment operator called" << std::endl;
    if(this != &other)
        WrongAnimal::operator=(other);
    return (*this);
}

// Public Methods
void WrongCat::makeSound(void) const
{
    std::cout << "¡Miau Miau Miau!" << std::endl;
}
// Getters

// Setters



