/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 06:20:16 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/28 06:55:33 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"

int	main(void)
{
	Data		dt;
	uintptr_t	ptr;

	dt.super = 'c';
	dt.cool = 59;
	ptr = Serializer::serialize(&dt);
	std::cout << "Serialize: " << ptr << std::endl;
	std::cout << "Deserialize char of data: " << Serializer::deserialize(ptr)->super << std::endl;
	std::cout << "Deserialize int of data: " << Serializer::deserialize(ptr)->cool << std::endl;
}

