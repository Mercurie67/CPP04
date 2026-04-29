#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
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
        void setIdea(int index, std::string value);
    //Getters
        std::string getIdea(int index) const;
        
};

#endif

