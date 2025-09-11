/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 06:20:23 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/28 06:50:32 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdint.h>

typedef struct s_data
{
	char	super;
	int		cool;
}				Data;

class Serializer
{
private:
	Serializer();
	Serializer(const Serializer &src);
public:
	Serializer	operator=(const Serializer &src);
	~Serializer();

	static uintptr_t	serialize(Data *ptr);
	static Data			*deserialize(uintptr_t raw);
};

