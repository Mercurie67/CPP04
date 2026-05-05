#include "Ice.hpp"
#include "Character.hpp"

//Constructors
Ice::Ice(void)
{
    type = "ice";
    std::cout << "Ice Default constructor called" << std::endl;
}

Ice::Ice(const Ice &other) : AMateria(other)
{
    std::cout << "Ice Copy constructor called" << std::endl;
}
// Destructors
Ice::~Ice(void)
{
    std::cout << "Ice Destructor called" << std::endl;
}

// Overload Operators
Ice &Ice::operator=(const Ice &other)
{
    std::cout << "Ice Assignment operator called" << std::endl;
    if(this != &other)
        AMateria::operator=(other);
    return (*this);
} 

// Public Methods
AMateria* Ice::clone() const
{
    AMateria *ret = new Ice();
    std::cout << "New Ice Created" << std::endl;
    return ret;
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
// Getters

// Setters



