#include "../headers/Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog default constructor called." << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
	std::cout << "Dog copy constructor called." << std::endl;
	*this = obj;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog assignment operator called." << std::endl;
	if (this != &other)
		type = other.getType();
		delete brain;
		brain = new Brain(*other.brain);
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog has been destroyed." << std::endl;
	delete brain;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}