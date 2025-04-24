/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:55:04 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/23 21:32:14 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

#include <iostream>

class Ice : public AMateria
{
public:
	Ice();
	Ice(Ice const &src);
	void	operator=(Ice const &src);
	~Ice();

	AMateria	*clone() const;
};


