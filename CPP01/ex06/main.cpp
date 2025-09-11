/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 18:38:02 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/24 09:17:10 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	Harl;
	if (argc != 2)
	{
		std::cout << "You need to pass one argument for Harl to think." << std::endl;
		return (1);
	}
	std::string	state = argv[1];
	Harl.complain(state);
	return (0);
}
