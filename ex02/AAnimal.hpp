#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>

class AAnimal
{
    protected:
        std::string type;
    
    public:
    //Constructors
        AAnimal(void);
        AAnimal(const AAnimal& other);

    //Destructors
        virtual ~AAnimal();

    //Overload Operators
        AAnimal &operator=(const AAnimal &other);
    
    //Public Methods
        virtual void makeSound(void) const = 0;
    
    //Setters
        virtual void setIdea(int index, std::string value) = 0;
    //Getters
        std::string getType(void) const;
        virtual std::string getIdea(int index) const = 0;
};

#endif

