/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:53:26 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/10 19:59:07 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

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
	std::cout << "first name : ";
	std::getline(std::cin, firstname);
	std::cout << "last name : ";
	std::getline(std::cin, lastname);
	std::cout << "nickname : ";
	std::getline(std::cin, nickname);
	std::cout << "phone number : ";
	std::getline(std::cin, phonenumber);
	std::cout << "darkest secret : ";
	std::getline(std::cin, darksecret);
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
	std::cout << "│" << std::setw(10) <<  trunc_data(nickname);
	std::cout << "│" << std::endl;
}

contact::~contact(void)
{
}
