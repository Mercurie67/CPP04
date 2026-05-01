#include "Cure.hpp"
#include "Character.hpp"

//Constructors
Cure::Cure(void)
{
    _type = "cure";
    std::cout << "Cure Default constructor called" << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other)
{
    std::cout << "Cure Copy constructor called" << std::endl;
}
// Destructors
Cure::~Cure(void)
{
    std::cout << "Cure Destructor called" << std::endl;
}

// Overload Operators
Cure &Cure::operator=(const Cure &other)
{
    std::cout << "Cure Assignment operator called" << std::endl;
    if(this != &other)
        AMateria::operator=(other);
    return (*this);
}

// Public Methods
AMateria* Cure::clone() const
{
    AMateria* ret = new Cure();
    std::cout << "New Cure Created" << std::endl;
    return ret;
}
void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
// Getters

// Setters



