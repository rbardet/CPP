/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:15:17 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/23 23:12:56 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

#include <iostream>

class MateriaSource : public IMateriaSource
{
protected:
	AMateria	*source[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource const &src);
	void	operator=(MateriaSource const &src);
	~MateriaSource();

	void		learnMateria(AMateria* src);
	AMateria*	createMateria(std::string const &src);
};


