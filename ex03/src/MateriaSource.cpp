#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource created with default constructor" << std::endl;
	for (int i = 0; i < 4; i++)
        this->table[i] = NULL;
}
MateriaSource::MateriaSource(const MateriaSource &other)
{
	for (int i = 0; i < 4; i++)
	{
		if (other.table[i])
			this->table[i] = other.table[i]->clone();
	}
	std::cout << "MateriaSource Copy constructor called" << std::endl;
}
MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	std::cout << "MateriaSource Assignment operator called" << std::endl;
	if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            delete table[i];
            table[i] = NULL;
        }
        for (int i = 0; i < 4; i++)
        {
            if (other.table[i])
                table[i] = other.table[i]->clone();
        }
    }
    return *this;
}
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->table[i])
			delete this->table[i];
	}
	std::cout << "MateriaSource Destructor called" << std::endl;
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	if(!materia)
	{
		std::cout << "Cannot learn invalid materia" << std::endl;
		return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->table[i] == NULL)
		{
			this->table[i] = materia;
			std::cout << "Materia " << this->table[i]->getType() << " learned at index " << i << std::endl;
			return ;
		}
	}
	std::cout << "Inventory for MateriaSource is full, deleting materia!" << std::endl;
	delete materia;
}
AMateria* MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->table[i] && this->table[i]->getType() == type)
			return (this->table[i]->clone());
	}
	std::cout << "Cannot create materia, " << type << " is invalid!" << std::endl;
	return (0);
}