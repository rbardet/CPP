/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:03:35 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/23 22:32:03 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
protected:
	std::string	name;
	AMateria	*inv[4];
public:
	Character();
	Character(Character const &src);
	void	operator=(Character const &src);
	~Character();

	Character(std::string name);
	std::string const &	getName() const;
	void				equip(AMateria *to_equip);
	void				use(int idx, ICharacter& target);
	void				unequip(int idx);
};

