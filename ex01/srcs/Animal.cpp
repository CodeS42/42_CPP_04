#include "../headers/Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(const Animal& obj)
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = obj;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal assignment operator called." << std::endl;
	if (this != &other)
		type = other.getType();
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal has been destroyed." << std::endl;
}

void Animal::makeSound(void) const
{
	std::cout << "The Animal makes sound." << std::endl;
}

std::string Animal::getType(void) const
{
	return (type);
}