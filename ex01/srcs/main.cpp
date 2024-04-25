#include "../headers/Animal.hpp"
#include "../headers/Cat.hpp"
#include "../headers/Dog.hpp"
#include "../headers/WrongAnimal.hpp"
#include "../headers/WrongCat.hpp"
#include "../headers/Brain.hpp"

int main()
{
	std::cout << "---- FIRST TEST ----" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	std::cout << "---- SECOND TEST ----" << std::endl;
	Animal *tab[4];
	tab[0] = new Cat();
	tab[1] = new Cat();
	tab[2] = new Dog();
	tab[3] = new Dog();

	for(int i = 0 ; i < 4 ; i++)
		delete tab[i];

	return (0);
}