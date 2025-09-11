/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:53:26 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/03 08:03:00 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contact(void)
{
}

void contact::contact_data()
{
	std::cout << "first name : " << firstname << std::endl;
	std::cout << "last name : " << lastname << std::endl;
	std::cout << "nickname : " << nickname << std::endl;
	std::cout << "phone number : " << phonenumber << std::endl;
	std::cout << "darkest secret : " << darksecret << std::endl;
}

void contact::add_contact()
{
	do
	{
		std::cout << "first name : ";
		if (!std::getline(std::cin, firstname))
			return ;
	} while (firstname.empty());
	do
	{
		std::cout << "last name : ";
		if (!std::getline(std::cin, lastname))
			return ;
	} while (lastname.empty());
	do
	{
		std::cout << "nickname : ";
		if (!std::getline(std::cin, nickname))
			return ;
	} while (nickname.empty());
	do
	{
		std::cout << "phone number : ";
		if (!std::getline(std::cin, phonenumber))
			return ;
	} while (phonenumber.empty());
	do
	{
		std::cout << "darkest secret : ";
		if (!std::getline(std::cin, darksecret))
			return ;
	} while (darksecret.empty());
}

std::string trunc_data(std::string data)
{
	if (data.length() > 10)
	{
		return (data.substr(0, 9) + ".");
	}
	return (data);
}

void	contact::show_contact(int id)
{
	std::cout << "│" << std::setw(10) << id + 1;
	std::cout << "│" << std::setw(10) << trunc_data(firstname);
	std::cout << "│" << std::setw(10) << trunc_data(lastname);
	std::cout << "│" << std::setw(10) << trunc_data(nickname);
	std::cout << "│" << std::endl;
}

contact::~contact(void)
{
}
