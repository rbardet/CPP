/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:33:24 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/24 13:41:54 by rbardet-         ###   ########.fr       */
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
	Zombie(std::string name);
	void announce(void);
	~Zombie(void);
};

void	randomChump( std::string name );
Zombie*	newZombie( std::string name );

#endif
