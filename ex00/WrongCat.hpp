#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
    //Constructors
        WrongCat(void);
        WrongCat(const WrongCat& other);

    //Destructors
        ~WrongCat();

    //Overload Operators
        WrongCat &operator=(const WrongCat &other);
    
    //Public Methods
        void makeSound(void) const;

    //Setters

    //Getters
        
};

#endif

