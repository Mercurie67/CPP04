#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
#include <string>
#include <sstream>

class Brain
{
    private:
        std::string ideas[100];
    public:
    //Constructors
        Brain(void);
        Brain(const Brain& other);

    //Destructors
        ~Brain();

    //Overload Operators
        Brain &operator=(const Brain &other);
    
    //Public Methods
        
    
    //Setters
        void setIdea(int index, std::string value);
    //Getters
        std::string getIdeas(int index) const;
};

#endif

