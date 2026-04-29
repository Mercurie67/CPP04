#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    
    public:
    //Constructors
        WrongAnimal(void);
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal& other);

    //Destructors
        virtual ~WrongAnimal();

    //Overload Operators
        WrongAnimal &operator=(const WrongAnimal &other);
    
    //Public Methods
        void makeSound(void) const;
    
    //Setters

    //Getters
        std::string getType(void) const;
};

#endif

