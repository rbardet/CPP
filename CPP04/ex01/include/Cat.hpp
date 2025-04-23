/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 08:19:24 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/23 16:47:15 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain	*ideas;
public:
	Cat();
	Cat(Cat const &src);
	void	operator=(Cat const &src);
	~Cat();

	void		makeSound() const;
	void		fill_ideas(std::string ideas);
	void		get_ideas() const;
};
