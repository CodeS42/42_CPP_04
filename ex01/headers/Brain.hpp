#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <ctype.h>

class Brain
{
    private:
        std::string ideas[100];
    
    public:
        Brain();
        Brain(const Brain& obj);
        Brain& operator=(const Brain& other);
        ~Brain();
};

#endif