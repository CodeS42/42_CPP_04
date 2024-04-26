#include "../headers/Animal.hpp"
#include "../headers/Cat.hpp"
#include "../headers/Dog.hpp"
#include "../headers/WrongAnimal.hpp"
#include "../headers/WrongCat.hpp"
#include "../headers/Brain.hpp"

int main(void)
{
	Animal *dog = new Dog();
	Animal *cat = new Cat();
	// Animal c;

	dog->makeSound();
	cat->makeSound();
	// c.makeSound();

	delete dog;
	delete cat;

	return (0);
}