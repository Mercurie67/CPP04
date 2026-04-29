#include "AMateria.hpp"

//Constructors
AMateria::AMateria(void)
{
    std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria(const std::string& type) : type(type)
{
    std::cout << "AMateria Default constructor called with atributes" << std::endl;
}

AMateria::AMateria(const AMateria &other) : type(other.type)
{
    std::cout << "AMateria Copy constructor called" << std::endl;
}
// Destructors
AMateria::~AMateria(void)
{
    std::cout << "AMateria Destructor called" << std::endl;
}

// Overload Operators
AMateria &AMateria::operator=(const AMateria &other)
{
    std::cout << "AMateria Assignment operator called" << std::endl;
    if(this != &other)
        this->type = other.type;
    return (*this);
}

// Public Methods
void AMateria::use(ICharacter& target)
{
    return ;
}

// Getters
std::string const &AMateria::getType() const
{
    return type;
}
// Setters



