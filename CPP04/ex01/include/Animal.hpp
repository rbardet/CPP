/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 08:04:15 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/05 09:11:59 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
private:
	std::string	type;
public:
	Animal();
	Animal(Animal const &src);
	Animal	operator=(Animal const &src);
	virtual ~Animal();

	virtual void		makeSound() const;
	const std::string	&getType() const;
	void				setType(std::string const type);
};


