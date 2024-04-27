#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <ctype.h>

class AAnimal
{
	protected:
		std::string type;

	public:
		AAnimal();
		AAnimal(const AAnimal& obj);
		AAnimal& operator=(const AAnimal& other);
		virtual ~AAnimal();
		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
};

#endif