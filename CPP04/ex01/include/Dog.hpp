/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 08:14:07 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/23 17:38:06 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain	*ideas;
public:
	Dog();
	Dog(Dog const &src);
	void	operator=(Dog const &src);
	~Dog();

	void		makeSound() const;
	void		fill_ideas(std::string ideas);
	void		get_ideas() const;
};



