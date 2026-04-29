#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal
{
    public:
    //Constructors
        Cat(void);
        Cat(const Cat& other);

    //Destructors
        ~Cat();

    //Overload Operators
        Cat &operator=(const Cat &other);
    
    //Public Methods
        void makeSound(void) const;

    //Setters

    //Getters
        
};

#endif

