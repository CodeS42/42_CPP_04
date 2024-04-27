#include "../headers/AAnimal.hpp"
#include "../headers/Cat.hpp"
#include "../headers/Dog.hpp"
#include "../headers/WrongAnimal.hpp"
#include "../headers/WrongCat.hpp"
#include "../headers/Brain.hpp"

int main(void)
{
	AAnimal *dog = new Dog();
	AAnimal *cat = new Cat();
	// AAnimal animal;

	dog->makeSound();
	cat->makeSound();
	// animal.makeSound();

	delete dog;
	delete cat;

	return (0);
}