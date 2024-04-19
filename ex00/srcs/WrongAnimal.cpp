#include "../headers/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	*this = obj;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "WrongAnimal assignment operator called." << std::endl;
	if (this != &other)
		type = other.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal has been destroyed." << std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "The " << getType() << " makes sound." << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (type);
}