/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 08:12:57 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/05 09:11:52 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "iostream"

class WrongAnimal
{
private:
	std::string	type;
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &src);
	WrongAnimal	operator=(WrongAnimal const &src);
	virtual ~WrongAnimal();

	void				makeSound() const;
	const std::string	&getType() const;
	void				setType(std::string const type);
};



