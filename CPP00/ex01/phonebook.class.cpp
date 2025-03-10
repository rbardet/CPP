/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 17:25:53 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/10 17:54:10 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.class.hpp"

phonebook::phonebook(void)
{
	return ;
}

std::string trunc_data(std::string data)
{
	if (data.length() > 10)
	{
		return (data.substr(0, 9) + ".");
	}
	return (data);
}

void	search_contact(phonebook directory, int j)
{
	std::string	buffer;

	std::cout << "Enter an index to get personal information : ";
	std::cin >> buffer;
	for (size_t i = 0; buffer[i]; i++)
	{
		if (!isdigit(buffer[i]) || buffer[i] == '0')
		{
			std::cout << "The index is out of range or not valid" << std::endl;
			return ;
		}
	}
	int	index = atoi(buffer.c_str());
	if (index <= j)
	{
		directory.contacts[index - 1].contact_data();
		return ;
	}
	else
	{
		std::cout << "The index is out of range or not valid" << std::endl;
	}
	return ;
}

void	phonebook::show_contact(phonebook directory, int j)
{
	if (j > 8)
		j = 8;
	if (j == 0)
	{
		std::cout << "No contact have been registered yet" << std::endl;
		return ;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	for(int i = 0; i < j; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1 << "|" << std::setw(10)
		<< trunc_data(directory.contacts[i].first_name);
		std::cout << "|" << std::setw(10) << trunc_data(directory.contacts[i].last_name) << "|";
		std::cout << std::setw(10) <<  trunc_data(directory.contacts[i].nickname) << "|" << std::endl;
	}
	search_contact(directory, j);
	return ;
}

phonebook::~phonebook(void)
{
	return ;
}
