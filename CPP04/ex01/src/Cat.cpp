/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 08:19:04 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/23 17:45:26 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat()
{
	std::cout << "Default Constructor called for Cat" << std::endl;
	this->setType("Cat");
	this->ideas = new Brain;
}

Cat::Cat(Cat const &src)
{
	std::cout << "Copy Constructor called for Cat" << std::endl;
	this->setType("Cat");
	this->ideas = new Brain (*src.ideas);
}

void	Cat::operator=(Cat const &src)
{
	std::cout << "Operator assignement called for Cat" << std::endl;
	delete this->ideas;
	this->ideas = new Brain (*src.ideas);
}

Cat::~Cat()
{
	std::cout << "Destructor called for Cat" << std::endl;
	delete	ideas;
}

void	Cat::makeSound() const
{
	std::cout << "Miaouuu" << std::endl;
}

void	Cat::fill_ideas(std::string ideas)
{
	this->ideas->fill_ideas(ideas);
}

void	Cat::get_ideas() const
{
	for (size_t i = 0; i < 100; i++)
		std::cout << this->ideas->get_ideas(i) << std::endl;
}
