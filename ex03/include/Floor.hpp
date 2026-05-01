#ifndef FLOOR_HPP
# define FLOOR_HPP
# include <iostream>
# include "AMateria.hpp"

class Floor
{
	private:
		AMateria* _item[100];
		int count;
	public:
    //Constructors
        Floor(void);
        Floor(const Floor& other);

    //Destructors
        ~Floor();

    //Overload Operators
		Floor &operator=(const Floor &other);
		void add_floor(AMateria* m);
} ;

extern Floor g_floor;

#endif
