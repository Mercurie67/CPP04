#ifndef CAT_HPP
# define CAT_HPP
# include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    private:
        Brain *brain;
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
        void setIdea(int index, std::string value);

    //Getters
        std::string getIdea(int index) const;
};

#endif 