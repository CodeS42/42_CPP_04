#include "../headers/Dog.hpp"

Dog::Dog() : AAnimal()
{
	std::cout << "Dog default constructor called." << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog& obj) : AAnimal(obj)
{
	std::cout << "Dog copy constructor called." << std::endl;
	*this = obj;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog assignment operator called." << std::endl;
	if (this != &other)
	{
		type = other.getType();
		if (brain)
			delete brain;
		brain = new Brain(*other.brain);
	}
	return (*this);
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog has been destroyed." << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}