#include "Animal.hpp"

//Constructors
Animal::Animal(void) : type("Just an animal")
{
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
    std::cout << "Animal Default constructor called with atributes" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type)
{
    std::cout << "Animal Copy constructor called" << std::endl;
}
// Destructors
Animal::~Animal(void)
{
    std::cout << "Animal Destructor called" << std::endl;
}

// Overload Operators
Animal &Animal::operator=(const Animal &other)
{
    std::cout << "Animal Assignment operator called" << std::endl;
    if(this != &other)
        this->type = other.type;
    return (*this);
}

// Public Methods
void Animal::makeSound(void) const
{
    std::cout << "Miau? Guau? I don't know what type of animal I am :(" << std::endl;
}

// Getters
std::string Animal::getType(void) const
{
    return type;
}

// Setters



