/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:21:40 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/29 11:40:15 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

Span::Span() : N(0) , i(0) {}

Span::Span(const Span &src) : N(src.N), i(src.i)
{
	for (size_t i = 0; i < N; i++)
		this->container[i] = src.container[i];
}

void	Span::operator=(const Span &src)
{
	this->N = src.N;
	this->i = src.i;
	for (size_t i = 0; i < N; i++)
		this->container[i] = src.container[i];
}

Span::~Span() {}

Span::Span(const unsigned int &max) : N(N), i(0) {}

void	Span::addNumber(const int &nb)
{
	if (i >= nb)
		throw(TooMuchValue());
	else
	{
		this->container.push_back(N);
		i++;
	}
}

void	Span::shortestSpan(const int &a, const int &b) const
{

}

void	Span::longestSpan(const int &a, const int &b) const
{

}

