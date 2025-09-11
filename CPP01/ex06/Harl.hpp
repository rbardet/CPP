/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 00:44:18 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/24 14:59:04 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CLASS_HPP
#define HARL_CLASS_HPP

#include <iostream>
#include <iomanip>

class Harl
{
private:
	void debug (void);
	void info (void);
	void warning (void);
	void error (void);
public:
	Harl(void);
	void complain(std::string level);
	~Harl(void);
};

#endif
