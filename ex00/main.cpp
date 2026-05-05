# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongCat.hpp"

int main()
{
	{
		std::cout << "USANDO PUNTEROS" << std::endl;
		const Animal* animal = new Animal();
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();
		
		std::cout << animal->getType() << " " << std::endl;
		std::cout << dog->getType() << " " << std::endl;
		std::cout << cat->getType() << " " << std::endl;
		animal->makeSound();
		dog->makeSound();
		cat->makeSound();
		delete(animal);
		delete(dog);
		delete(cat);
	}
	{
		std::cout << "\nSIN PUNTEROS" << std::endl;
		Dog dog;
		Cat cat;
		Animal animal;
		
		std::cout << dog.getType() << " " << std::endl;
		std::cout << cat.getType() << " " << std::endl;
		std::cout << animal.getType() << " " << std::endl;

		dog.makeSound();
		cat.makeSound();
		animal.makeSound();
	}
	{
		std::cout << std::endl;
		std::cout << "WRONG ANIMAL CON PUNTEROS" << std::endl;
		const WrongAnimal* meta1 = new WrongAnimal();
		const WrongAnimal* i1 = new WrongCat();

		std::cout << i1->getType() << " " << std::endl;
		std::cout << meta1->getType() << " " << std::endl;
		i1->makeSound();
		meta1->makeSound();
		delete(meta1);
		delete(i1);
	}
	{
		std::cout << "\nWRONG ANIMAL SIN PUNTEROS" << std::endl;
		const WrongAnimal wronga;
		const WrongCat wrongc;

		std::cout << wronga.getType() << " " << std::endl;
		std::cout << wrongc.getType() << " " << std::endl;
		wronga.makeSound();
		wrongc.makeSound();
	}
}