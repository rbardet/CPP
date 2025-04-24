/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 21:06:02 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/23 23:22:23 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "Default Constructor called for MateriaSource" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	std::cout << "Copy Constructor called for MateriaSource" << std::endl;
	for (size_t i = 0; i < 4; i++)
		if (src.source[i])
			this->source[i]= src.source[i];
}

void	MateriaSource::operator=(MateriaSource const &src)
{
	std::cout << "Operator assignement called for MateriaSource" << std::endl;
	for (size_t i = 0; i < 4; i++)
		if (src.source[i])
			delete this->source[i];
	for (size_t i = 0; i < 4; i++)
		if (src.source[i])
			this->source[i]= src.source[i];
}

MateriaSource::~MateriaSource()
{
	std::cout << "Destructor called for MateriaSource" << std::endl;
}

void	MateriaSource::learnMateria(AMateria *src)
{
	if (this->source[3])
	{
		std::cout << "This MateriaSource is already full" << std::endl;
		delete src;
		return ;
	}
	for (size_t i = 0; i < 4; i++)
	{
		if (!this->source[i])
		{
			this->source[i] = src;
			std::cout << "Materia " << src->getType()
			<<" learned at " << i << " of MateriaSource inventory" << std::endl;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &src)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->source[i]->getType() == src)
			return (this->source[i]);
	}
	std::cout << "This MateriaSource have not learned " << src << " yet" << std::endl;
	return (NULL);
}