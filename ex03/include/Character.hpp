#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
#include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria* _inventory[4];    
    public:
    //Constructors
        Character(void);
        Character(const Character& other);
        Character(std::string _name);

    //Destructors
        virtual ~Character();

    //Overload Operators
        Character &operator=(const Character &other);
    
    //Public Methods
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
    //Setters

    //Getters  
        std::string const &getName() const;
};

#endif

