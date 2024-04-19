#include "../headers/Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog default constructor called." << std::endl;
	type = "Dog";
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
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog has been destroyed." << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}