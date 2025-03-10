/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 17:25:53 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/10 19:59:09 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.class.hpp"

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
	std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
	std::cout << "│   index  │first name│ last name│ nickname │" << std::endl;
	std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
	for (int id = 0; id < nb_contact; id++)
		contacts[id].show_contact(id);
	std::cout << "└──────────┴──────────┴──────────┴──────────┘" << std::endl;
}
// void	search_contact(phonebook directory, int j)
// {
// 	std::string	buffer;

// 	std::cout << "Enter an index to get personal information : ";
// 	std::cin >> buffer;
// 	for (size_t i = 0; buffer[i]; i++)
// 	{
// 		if (!isdigit(buffer[i]) || buffer[i] == '0')
// 		{
// 			std::cout << "The index is out of range or not valid" << std::endl;
// 			return ;
// 		}
// 	}
// 	int	index = atoi(buffer.c_str());
// 	if (index <= j)
// 	{
// 		directory.contacts[index - 1].contact_data();
// 		return ;
// 	}
// 	else
// 	{
// 		std::cout << "The index is out of range or not valid" << std::endl;
// 	}
// 	return ;
// }

phonebook::~phonebook(void)
{
}
