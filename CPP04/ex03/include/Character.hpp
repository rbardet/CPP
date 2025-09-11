/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:03:35 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/25 21:27:44 by rbardet-         ###   ########.fr       */
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
	AMateria	*ground[1024];
	size_t		idx;
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
	void				clean_ground();
};

