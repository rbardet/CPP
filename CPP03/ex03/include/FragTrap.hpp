/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 05:58:12 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/07 08:50:06 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
private:

public:
	FragTrap();
	FragTrap(const FragTrap &src);
	FragTrap	operator=(const FragTrap &src);
	~FragTrap();

	FragTrap(std::string const name);
	void			highFivesGuys(void);
};



