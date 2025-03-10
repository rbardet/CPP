/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:53:26 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/10 17:47:43 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.class.hpp"

contact::contact(void)
{
	return ;
}

void contact::contact_data()
{
	std::cout << "first name : " << first_name << std::endl;
	std::cout << "last name : " << last_name << std::endl;
	std::cout << "nickname : " << nickname << std::endl;
	std::cout << "phone number : " << phone_number << std::endl;
	std::cout << "darkest secret : " << dark_secret << std::endl;
}

contact	contact::add_contact()
{
	std::cout << "first name : ";
	std::cin >> first_name;
	std::cout << "last name : ";
	std::cin >> last_name;
	std::cout << "nickname : ";
	std::cin >> nickname;
	std::cout << "phone number : ";
	std::cin >> phone_number;
	std::cout << "darkest secret : ";
	std::cin >> dark_secret;
}

contact::~contact(void)
{
	return ;
}
