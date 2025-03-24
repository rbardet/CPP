/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 00:44:16 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/24 09:30:34 by rbardet-         ###   ########.fr       */
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
	int complain_lv = get_complain_lv(level);
	void(Harl::*ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	bool is_complaining;
	std::string state[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	if (complain_lv == -1)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (i == complain_lv)
			is_complaining = true;
		if (is_complaining == true)
			(this->*ptr[i])();
	}
}

int	Harl::get_complain_lv(std::string level)
{
	int	wich_case = -1;
	int	complain_lv = 0;
	std::string state[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (state[i] == level)
			wich_case = i;
	}
	switch (wich_case)
	{
	case -1:
		complain_lv = -1;
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break ;
	case 0:
		complain_lv = 0;
		break ;
	case 1:
		complain_lv = 1;
		break ;
	case 2:
		complain_lv = 2;
		break ;
	case 3:
		complain_lv = 3;
		break ;
	}
	return (complain_lv);
}

Harl::~Harl(void)
{
}
