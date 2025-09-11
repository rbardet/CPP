/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 08:17:45 by rbardet-          #+#    #+#             */
/*   Updated: 2025/05/05 00:03:10 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T> void iter(T *arr, size_t len, void(ptr)(T&))
{
	for (size_t i = 0; i < len; i++)
		ptr(arr[i]);
	std::cout << std::endl;
}

template <typename T> void iter(const T *arr, size_t len, void(ptr)(const T&))
{
	for (size_t i = 0; i < len; i++)
		ptr(arr[i]);
	std::cout << std::endl;
}
