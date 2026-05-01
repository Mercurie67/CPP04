#ifndef CURE_HPP
# define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
    //Constructors
        Cure(void);
        Cure(const Cure& other);

    //Destructors
        ~Cure();

    //Overload Operators
        Cure &operator=(const Cure &other);
    
    //Public Methods
        AMateria* clone() const;
        void use(ICharacter& target);
    //Setters

    //Getters
        
};

#endif

