#include "Brain.hpp"

//Constructors
Brain::Brain(void)
{
    for (int i = 0; i < 100; i++)
    {
        std::stringstream ss;
        ss << i;
        ideas[i] = "Idea " + ss.str();
    }
    std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    std::cout << "Brain Copy constructor called" << std::endl;
}
// Destructors
Brain::~Brain(void)
{
    std::cout << "Brain Destructor called" << std::endl;
}

// Overload Operators
Brain &Brain::operator=(const Brain &other)
{
    std::cout << "Brain Assignment operator called" << std::endl;
    if(this != &other)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
    return (*this);
}

// Public Methods

// Getters
std::string Brain::getIdeas(int index) const
{
    if (index < 0 || index >= 100)
        return "";
    return ideas[index];
}

// Setters
void Brain::setIdea(int index, std::string value)
{
    ideas[index] = value;
}


