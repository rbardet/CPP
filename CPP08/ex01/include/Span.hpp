/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:18:56 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/29 13:55:49 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <stdlib.h>

class Span
{
private:
	std::vector <int> container;
	unsigned int	N;
public:
	Span();
	Span(const Span &src);
	void operator=(const Span &src);
	~Span();

	Span(const unsigned int &N);
	void	addNumber(const int &nb);
	int		shortestSpan() const;
	int		longestSpan() const;
	void	fillContainer();
	class TooMuchValue : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return ("This container has already reached his max capacity");
			}
	};
	class CantFind : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return ("Error: Couldn't find value in container");
			}
	};
};
