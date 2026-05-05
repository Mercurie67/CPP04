#include "Character.hpp"
#include "AMateria.hpp"
#include "Floor.hpp"

Floor g_floor;
//Constructors
Character::Character(void)
{
    std::cout << "Character Default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::Character(std::string name) : name(name)
{
    std::cout << "Character Default constructor called with atributes" << std::endl;
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::Character(const Character &other) : name(other.name)
{
    for (int i = 0; i < 4; i++)
    {
        if (other.inventory[i])
            this->inventory[i] = other.inventory[i]->clone();
        else
            this->inventory[i] = NULL;
    }
    std::cout << "Character Copy constructor called" << std::endl;
}
// Destructors
Character::~Character(void)
{
    std::cout << "Character Destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        delete inventory[i];
}

// Overload Operators
Character &Character::operator=(const Character &other)
{
    std::cout << "Character Assignment operator called" << std::endl;
    if (this != &other)
    {
        this->name = other.name;
        for (int i = 0; i < 4; i++)
        {
            delete inventory[i];
            inventory[i] = NULL;
        }
        for (int i = 0; i < 4; i++)
        {
            if (other.inventory[i])
                inventory[i] = other.inventory[i]->clone();
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
        if (inventory[i] == NULL)
        {
            inventory[i] = m;
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
    if(inventory[idx] != NULL)
    {
        g_floor.add_floor(inventory[idx]);
        inventory[idx] = NULL;
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
    else if (inventory[idx] == NULL)
    {
        std::cout << "You cannot use an Empty Slot\n";
        return;
    }
    inventory[idx]->use(target);
}

// Getters
std::string const &Character::getName() const
{
    return name;
}
// Setters