/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 05:36:15 by rbardet-          #+#    #+#             */
/*   Updated: 2025/06/27 02:24:23 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>

template<typename T>bool easyfind(T &container, int value)
{
	if (std::find(container.begin() , container.end() , value) != container.end())
	{
		std::cout << "Value : " << value << " found in container" << std::endl;
		return (true);
	}
	std::cout << "Value : " << value << " not found" << std::endl;
	return (false);
}
