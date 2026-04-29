#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
#include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string type;
    public:
    //Constructors
        AMateria(void);
        AMateria(const AMateria& other);
        AMateria(const std::string& type);

    //Destructors
        virtual ~AMateria();

    //Overload Operators
        AMateria &operator=(const AMateria &other);
    
    //Public Methods
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
    
    //Setters

    //Getters
    std::string const &getType() const;
        
};

#endif

