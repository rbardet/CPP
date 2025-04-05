/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 08:22:13 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/05 09:11:34 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default Constructor called for WrongCat" << std::endl;
	this->setType("WrongCat");
}

WrongCat::WrongCat(WrongCat const &src)
{
	std::cout << "Copy Constructor called for WrongCat" << std::endl;
	*this = src;
}

WrongCat	WrongCat::operator=(WrongCat const &src)
{
	std::cout << "Operator assignement called for WrongCat" << std::endl;
	return (src);
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor called for WrongCat" << std::endl;
}
