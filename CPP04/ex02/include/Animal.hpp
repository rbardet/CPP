/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 08:04:15 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/23 18:35:26 by rbardet-         ###   ########.fr       */
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
	void	operator=(Animal const &src);
	virtual ~Animal();

	virtual void		makeSound() const = 0;
	const std::string	&getType() const;
	void				setType(std::string const type);
};


