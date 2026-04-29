#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal
{
    public:
    //Constructors
        Dog(void);
        Dog(const Dog& other);

    //Destructors
        ~Dog();

    //Overload Operators
        Dog &operator=(const Dog &other);
    
    //Public Methods
        void makeSound(void) const;

    //Setters

    //Getters
        
};

#endif

