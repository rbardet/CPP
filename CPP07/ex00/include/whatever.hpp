/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 08:02:16 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/28 08:15:29 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdint.h>

template <typename T> void swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T> T min(T a, T b)
{
	if (b < a || b == a)
		return (b);
	else
		return (a);
}

template <typename T> T max (T a, T b)
{
	if (b > a || b == a)
		return (b);
	else
		return (a);
}
