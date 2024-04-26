#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <ctype.h>

class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		Animal(const Animal& obj);
		Animal& operator=(const Animal& other);
		virtual ~Animal();
		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
};

#endif