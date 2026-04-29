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
        virtual void setIdea(int index, std::string value) = 0;
    //Getters
        std::string getType(void) const;
        virtual std::string getIdea(int index) const;
};

#endif

