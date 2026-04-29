#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
    protected:
        std::string type;
    
    public:
    //Constructors
        Animal(void);
        Animal(std::string type);
        Animal(const Animal& other);

    //Destructors
        virtual ~Animal();

    //Overload Operators
        Animal &operator=(const Animal &other);
    
    //Public Methods
        virtual void makeSound(void) const;
    
    //Setters

    //Getters
        std::string getType(void) const;
};

#endif

