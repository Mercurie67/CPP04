#include "Dog.hpp"

//Constructors
Dog::Dog(void) : Animal("Dog")
{
    brain = new Brain();
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    this->brain = new Brain(*other.brain);
    std::cout << "Dog Copy constructor called" << std::endl;
}
// Destructors
Dog::~Dog(void)
{
    delete brain;
    std::cout << "Dog Destructor called" << std::endl;
}

// Overload Operators
Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog Assignment operator called" << std::endl;
    if(this != &other)
    {
        Animal::operator=(other);
        delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    return (*this);
}

// Public Methods
void Dog::makeSound(void) const
{
    std::cout << "¡Guau Guau Guau!" << std::endl;
}

// Getters
std::string Dog::getIdea(int index) const
{
    return brain->getIdeas(index);
}
// Setters
void Dog::setIdea(int index, std::string value)
{
    brain->setIdea(index, value);
}


