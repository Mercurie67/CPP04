#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Character;

class Ice : public AMateria
{
    public:
    //Constructors
        Ice(void);
        Ice(const Ice& other);

    //Destructors
        ~Ice();

    //Overload Operators
        Ice &operator=(const Ice &other);
    
    //Public Methods
        AMateria* clone() const;
        void use(ICharacter& target);
    //Setters

    //Getters
        
};

#endif

