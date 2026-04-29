#include "Character.hpp"

//Constructors
Character::Character(void)
{
    std::cout << "Default constructor called" << std::endl;
}

Character::Character(const Character &other)
{
    std::cout << "Copy constructor called" << std::endl;
    (void) other;
}
// Destructors
Character::~Character(void)
{
    std::cout << "Destructor called" << std::endl;
}

// Overload Operators
Character &Character::operator=(const Character &other)
{
    std::cout << "Assignment operator called" << std::endl;
    (void) other;
    return (*this);
}

// Public Methods

// Getters

// Setters



