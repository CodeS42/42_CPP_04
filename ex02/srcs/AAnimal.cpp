#include "../headers/AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
	std::cout << "AAnimal default constructor called." << std::endl;
}

AAnimal::AAnimal(const AAnimal& obj)
{
	std::cout << "AAnimal copy constructor called." << std::endl;
	*this = obj;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	std::cout << "AAnimal assignment operator called." << std::endl;
	if (this != &other)
		type = other.getType();
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal has been destroyed." << std::endl;
}

std::string AAnimal::getType(void) const
{
	return (type);
}