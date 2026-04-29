#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
class AMateria;

class Character
{
    private:
        std::string name;
        AMateria* materias[4];
    
    public:
    //Constructors
        Character(void);
        Character(const Character& other);

    //Destructors
        ~Character();

    //Overload Operators
        Character &operator=(const Character &other);
    
    //Public Methods
    
    //Setters

    //Getters
        
};

#endif

