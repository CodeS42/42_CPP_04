#include "../headers/Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor called." << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = obj;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat assignment operator called." << std::endl;
	if (this != &other)
		type = other.getType();
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat has been destroyed." << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}