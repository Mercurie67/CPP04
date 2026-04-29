#include "Cat.hpp"

//Constructors
Cat::Cat(void) 
{
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : AAnimal(other)
{
    this->brain = new Brain(*other.brain);
    std::cout << "Cat Copy constructor called" << std::endl;
}
// Destructors
Cat::~Cat(void)
{
    delete brain;
    std::cout << "Cat Destructor called" << std::endl;
}

// Overload Operators
Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat Assignment operator called" << std::endl;
    if(this != &other)
    {
        AAnimal::operator=(other);
        delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    return (*this);
}

// Public Methods
void Cat::makeSound(void) const
{
    std::cout << "¡Miau Miau Miau!" << std::endl;
}
// Getters
std::string Cat::getIdea(int index) const
{
    return brain->getIdeas(index);
}
// Setters
void Cat::setIdea(int index, std::string value)
{
    brain->setIdea(index, value);
}


