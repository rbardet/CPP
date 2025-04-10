#include "../include/Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Constructor called for Brain" << std::endl;
}

Brain::Brain(Brain const &src)
{
	std::cout << "Copy Constructor called for Brain" << std::endl;
	*this = src;
}

Brain	Brain::operator=(Brain const &src)
{
	std::cout << "Operator assignement called for Brain" << std::endl;
	return (src);
}

Brain::~Brain()
{
	std::cout << "Destructor called for Brain" << std::endl;
}

void	Brain::get_ideas()
{
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = "Playing outside";	
}

void	Brain::display_ideas() const
{
	for (size_t i = 0; i < 100; i++)
		std::cout << this->ideas[i] << std::endl;
}