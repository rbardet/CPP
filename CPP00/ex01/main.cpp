/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:50:41 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/10 17:54:02 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

int	main(void)
{
	phonebook		directory;
	std::string		buff;
	int				i = 0;

	while (1)
	{
		std::cin >> buff;
		if (buff == "ADD")
		{
			directory.contacts[i % 8] = add_contact(directory.contacts[i % 8]);
			i++;
		}
		else if (buff == "SEARCH")
			show_contact(directory, i);
		else if (buff == "EXIT")
			exit (EXIT_SUCCESS);
		else
		{
			std::cout << "Phone book usage :" << std::endl;
			std::cout << "[ADD] to add a new contact" << std::endl;
			std::cout << "[SEARCH] to list all the contact" << std::endl;
			std::cout << "[EXIT] to leave the phone book" << std::endl;
			std::cout << "This phone book can register 8 contact" << std::endl;
		}
	}
	return (0);
}
