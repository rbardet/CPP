/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:55:42 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/23 21:32:12 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

#include <iostream>

class Cure : public AMateria
{
public:
	Cure();
	Cure(Cure const &src);
	void	operator=(Cure const &src);
	~Cure();

	AMateria	*clone() const;
};
