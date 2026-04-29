#include "AAnimal.hpp"

//Constructors
AAnimal::AAnimal(void)
{
    std::cout << "AAnimal Default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) : type(other.type)
{
    std::cout << "AAnimal Copy constructor called" << std::endl;
}
// Destructors
AAnimal::~AAnimal(void)
{
    std::cout << "AAnimal Destructor called" << std::endl;
}

// Overload Operators
AAnimal &AAnimal::operator=(const AAnimal &other)
{
    std::cout << "AAnimal Assignment operator called" << std::endl;
    if(this != &other)
        this->type = other.type;
    return (*this);
}

// Public Methods


// Getters
std::string AAnimal::getType(void) const
{
    return type;
}

// Setters



