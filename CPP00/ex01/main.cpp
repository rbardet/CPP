/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:50:41 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/29 04:58:27 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	phonebook		directory;
	std::string		buff;

	while (1)
	{
		if (!std::getline(std::cin, buff))
			break ;
		else if (buff == "ADD")
			directory.add_contact();
		else if (buff == "SEARCH")
			directory.show_contact();
		else if (buff == "EXIT")
			break ;
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
