#include "../headers/Animal.hpp"
#include "../headers/Cat.hpp"
#include "../headers/Dog.hpp"
#include "../headers/WrongAnimal.hpp"
#include "../headers/WrongCat.hpp"

int main(void)
{
	{
		const Animal* animal = new Animal();
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();
		
		std::cout << dog->getType() << std::endl;
		std::cout << cat->getType() << std::endl;
		cat->makeSound();
		dog->makeSound();
		animal->makeSound();

		delete animal;
		delete cat;
		delete dog;
	}

	{
		const WrongAnimal* animal = new WrongAnimal();
		const WrongAnimal* cat = new WrongCat();
		
		std::cout << cat->getType() << std::endl;
		cat->makeSound();
		animal->makeSound();

		delete animal;
		delete cat;
	}

	return 0;
}