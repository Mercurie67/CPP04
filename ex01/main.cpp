# include "Cat.hpp"
# include "Dog.hpp"

int main()
{
	Animal *animal[2];

	for(int i = 0; i < 1; i++)
		animal[i] = new Dog();
	for(int i = 1; i < 2; i++)
		animal[i] = new Cat();
	for(int i = 0; i < 2; i++)
	{
		std::cout << "I am a " << animal[i]->getType() << " and I go...";
		animal[i]->makeSound();
		for (int j = 0; j < 5; j++)
        	std::cout << animal[i]->getIdea(j) << std::endl;
	}
	for(int i = 0; i < 2; i++)
		delete(animal[i]);
	{
		std::cout << "Checking if deep copy\n";
		Cat a;
		a.setIdea(0, "Cazar");

		Cat b = a;

		a.setIdea(0, "Dormir");

		std::cout << "A: " << a.getIdea(0) << std::endl;
		std::cout << "B: " << b.getIdea(0) << std::endl;
	}
	return 0;
}