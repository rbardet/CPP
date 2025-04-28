/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 06:20:23 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/28 06:25:05 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Serializer
{
private:
	Serializer();
public:
	~Serializer();

	static uintptr_t	serialize(Data *ptr);
	static Data			*deserialize(uintptr_t raw);
};
