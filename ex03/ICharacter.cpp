#include "ICharacter.hpp"

//Constructors
ICharacter::ICharacter(void)
{
    std::cout << "Default constructor called" << std::endl;
}

ICharacter::ICharacter(const ICharacter &other)
{
    std::cout << "Copy constructor called" << std::endl;
    (void) other;
}
// Destructors
ICharacter::~ICharacter(void)
{
    std::cout << "Destructor called" << std::endl;
}

// Overload Operators
ICharacter &ICharacter::operator=(const ICharacter &other)
{
    std::cout << "Assignment operator called" << std::endl;
    (void) other;
    return (*this);
}

// Public Methods

// Getters

// Setters



