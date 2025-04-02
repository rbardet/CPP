/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 00:44:16 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/02 02:07:25 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

void	Harl::debug(void)
{
	std::cout << "\033[1m\033[33m\033[5m[DEBUG]\033[0m" << std::endl;
	std::cout << "I love having extra bacon for my 7XL";
	std::cout << "-double-cheese-triple-pickle-special ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "\033[1m\033[32m\033[5m[INFO]\033[0m" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put";
	std::cout << "enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "\033[1m\033[31m\033[5m[WARNING]\033[0m" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for";
	std::cout << "years, whereas you started working here just last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "\033[1m\033[36m\033[5m[ERROR]\033[0m" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	int	wich_case = -1;
	std::string state[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (state[i] == level)
			wich_case = i;
	}
	switch (wich_case)
	{
	case 0:
		debug();
	case 1:
		info();
	case 2:
		warning();
	case 3:
		error();
		break ;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

Harl::~Harl(void)
{
}
