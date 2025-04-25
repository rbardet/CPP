/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:09:38 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/23 17:05:08 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Constructor called for Brain" << std::endl;
}

Brain::Brain(Brain const &src)
{
	std::cout << "Copy Constructor called for Brain" << std::endl;
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
}

void	Brain::operator=(Brain const &src)
{
	std::cout << "Operator assignement called for Brain" << std::endl;
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
}

Brain::~Brain()
{
	std::cout << "Destructor called for Brain" << std::endl;
}

void	Brain::fill_ideas(std::string ideas)
{
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = ideas;
}

const std::string	&Brain::get_ideas(size_t i) const
{
	return(this->ideas[i]);
}
