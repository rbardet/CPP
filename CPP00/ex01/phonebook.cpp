/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 17:25:53 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/24 09:31:53 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

phonebook::phonebook(void)
{
	index = 0;
	nb_contact = 0;
}

void	phonebook::add_contact(void)
{
	contacts[index].add_contact();
	index = (index + 1) % 8;
	if (nb_contact < 8)
		nb_contact++;
}

void	phonebook::show_contact(void)
{
	if (nb_contact == 0)
	{
		std::cout << "No contact have been registered yet" << std::endl;
		return ;
	}
	std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
	std::cout << "│   index  │first name│ last name│ nickname │" << std::endl;
	std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
	for (int id = 0; id < nb_contact; id++)
		contacts[id].show_contact(id);
	std::cout << "└──────────┴──────────┴──────────┴──────────┘" << std::endl;
	search_contact();
}

void	phonebook::search_contact(void)
{
	std::string	buffer;

	do
	{
		std::cout << "Enter an index to get personal information : ";
		if (!std::getline(std::cin, buffer))
			return ;
	} while(buffer.empty());
	for (int i = 0; buffer[i]; i++)
	{
		if (!isdigit(buffer[i]) || buffer[i] == '0')
		{
			std::cout << "The index is out of range or not valid" << std::endl;
			return ;
		}
	}
	int	index = atoi(buffer.c_str());
	if (index <= nb_contact)
	{
		contacts[index - 1].contact_data();
		return ;
	}
	else
	{
		std::cout << "The index is out of range or not valid" << std::endl;
	}
}

phonebook::~phonebook(void)
{
}
