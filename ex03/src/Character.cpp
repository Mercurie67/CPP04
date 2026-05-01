#include "Character.hpp"
#include "AMateria.hpp"
#include "Floor.hpp"

Floor g_floor;
//Constructors
Character::Character(void)
{
    std::cout << "Character Default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

Character::Character(std::string _name) : _name(_name)
{
    std::cout << "Character Default constructor called with atributes" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}

Character::Character(const Character &other) : _name(other._name)
{
    for (int i = 0; i < 4; i++)
    {
        if (other._inventory[i])
            this->_inventory[i] = other._inventory[i]->clone();
        else
            this->_inventory[i] = NULL;
    }
    std::cout << "Character Copy constructor called" << std::endl;
}
// Destructors
Character::~Character(void)
{
    std::cout << "Character Destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        delete _inventory[i];
}

// Overload Operators
Character &Character::operator=(const Character &other)
{
    std::cout << "Character Assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        for (int i = 0; i < 4; i++)
        {
            delete _inventory[i];
            _inventory[i] = NULL;
        }
        for (int i = 0; i < 4; i++)
        {
            if (other._inventory[i])
                _inventory[i] = other._inventory[i]->clone();
        }
    }
    return *this;
}

// Public Methods
void Character::equip(AMateria* m)
{
    if (!m)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] == NULL)
        {
            _inventory[i] = m;
            std::cout << "Materia equiped\n";
            return;
        }
    }
    std::cout << "Inventary full\n";
}
void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
    {
        std::cout << "Invalid slot" << std::endl;
        return;
    }
    if(_inventory[idx] != NULL)
    {
        g_floor.add_floor(_inventory[idx]);
        _inventory[idx] = NULL;
        std::cout << "Materia unequiped\n";
        return;
    }    
    std::cout << "Empty Slot\n";
}
void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3)
    {
        std::cout << "Invalid slot" << std::endl;
        return;
    }
    else if (_inventory[idx] == NULL)
    {
        std::cout << "You cannot use an Empty Slot\n";
        return;
    }
    _inventory[idx]->use(target);
}

// Getters
std::string const &Character::getName() const
{
    return _name;
}
// Setters