/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:33:24 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/24 13:43:27 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie
{
private:
	std::string name;
public:
	Zombie();
	void announce(void);
	void set_name(std::string name);
	~Zombie(void);
};

Zombie*	zombieHorde( int N, std::string name );

#endif
