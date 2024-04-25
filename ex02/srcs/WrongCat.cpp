#include "../headers/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat default constructor called." << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal(obj)
{
	std::cout << "WrongCat copy constructor called." << std::endl;
	*this = obj;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat assignment operator called." << std::endl;
	if (this != &other)
		type = other.getType();
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat has been destroyed." << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}