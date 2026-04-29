#include "WrongAnimal.hpp"

//Constructors
WrongAnimal::WrongAnimal(void) : type("Just a wrong animal")
{
    std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
    std::cout << "WrongAnimal Default constructor called with atributes" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type)
{
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
}
// Destructors
WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

// Overload Operators
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << "WrongAnimal Assignment operator called" << std::endl;
    if(this != &other)
        this->type = other.type;
    return (*this);
}

// Public Methods
void WrongAnimal::makeSound(void) const
{
    std::cout << "Miau? Guau? I don't know what type of WrongAnimal I am :(" << std::endl;
}

// Getters
std::string WrongAnimal::getType(void) const
{
    return type;
}

// Setters



