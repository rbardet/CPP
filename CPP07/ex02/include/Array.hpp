/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 08:40:59 by rbardet-          #+#    #+#             */
/*   Updated: 2025/05/05 00:03:55 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <class T>
class Array
{
private:
	T				*array;
	unsigned int	_size;
public:
	Array();
	Array(const Array &src);
	Array	&operator=(const Array &src);
	~Array();

	Array(const unsigned int &_size);
	const unsigned int	&size() const;
	T					&operator[](const int &pos) const;
	class InvalidIndex : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return ("Index out of bounds");
			}
	};
};

#include "Array.tpp"
