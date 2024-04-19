#include "../headers/WrongAnimal.hpp"

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat& obj);
		WrongCat& operator=(const WrongCat& other);
		~WrongCat();
		void makeSound(void) const;
};

#endif