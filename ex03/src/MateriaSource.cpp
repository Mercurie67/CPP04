#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource created with default constructor" << std::endl;
	for (int i = 0; i < 4; i++)
        this->_table[i] = NULL;
}
MateriaSource::MateriaSource(const MateriaSource &other)
{
	for (int i = 0; i < 4; i++)
	{
		if (other._table[i])
			this->_table[i] = other._table[i]->clone();
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
            delete _table[i];
            _table[i] = NULL;
        }
        for (int i = 0; i < 4; i++)
        {
            if (other._table[i])
                _table[i] = other._table[i]->clone();
        }
    }
    return *this;
}
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_table[i])
			delete this->_table[i];
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
		if (this->_table[i] == NULL)
		{
			this->_table[i] = materia;
			std::cout << "Materia " << this->_table[i]->getType() << " learned at index " << i << std::endl;
			return ;
		}
	}
	std::cout << "Inventory for MateriaSource is full, deleting materia!" << std::endl;
	delete materia;
}
AMateria* MateriaSource::createMateria(const std::string &_type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_table[i] && this->_table[i]->getType() == _type)
			return (this->_table[i]->clone());
	}
	std::cout << "Cannot create materia, " << _type << " is invalid!" << std::endl;
	return (0);
}