#include "Floor.hpp"


Floor::Floor(void)
{
	for(int i = 0; i < 100; i++)
		_item[i] = NULL;
	count = 0;
	std::cout << "Floor Default constructor called" << std::endl;
}
Floor::Floor(const Floor& other)
{
	(void)other;
}
Floor::~Floor()
{
	for(int i = 0; i < count; i++)
		delete _item[i];
	std::cout << "Floor Default destructor called" << std::endl;
}

Floor &Floor::operator=(const Floor &other)
{
	(void)other;
	return *this;
}
void Floor::add_floor(AMateria* m)
{
    if (count < 100)
    	_item[count++] = m;
}