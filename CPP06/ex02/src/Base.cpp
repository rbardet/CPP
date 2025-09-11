/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 07:02:39 by rbardet-          #+#    #+#             */
/*   Updated: 2025/09/09 18:45:13 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"

Base	*generate(void)
{
	std::time_t now = std::time(NULL);
	std::tm *localTime = std::localtime(&now);
	if (localTime->tm_sec >= 0 && localTime->tm_sec <= 20)
		return (new A());
	else if (localTime->tm_sec >= 21 && localTime->tm_sec <= 40)
		return (new B());
	else
		return (new C());
}

void	identify(Base *p)
{
	Base *base = dynamic_cast<A*>(p);
	if (base != NULL)
	{
		std::cout << "the identity of the class is A" << std::endl;
		return ;
	}
	base = dynamic_cast<B*>(p);
	if (base != NULL)
	{
		std::cout << "the identity of the class is B" << std::endl;
		return ;
	}
	base = dynamic_cast<C*>(p);
	std::cout << "the identity of the class is C" << std::endl;
}

void	identify(Base &p)
{
	Base base;
	try
	{
		base = dynamic_cast<A&>(p);
	}
	catch(const std::exception& e)
	{
		std::cerr << "The class is not of type A" << std::endl;
	}
	try
	{
		base = dynamic_cast<B&>(p);
	}
	catch(const std::exception& e)
	{
		std::cerr << "The class is not of type B" << std::endl;
	}
	try
	{
		base = dynamic_cast<C&>(p);
	}
	catch(const std::exception& e)
	{
		std::cerr << "The class is not of type C" << std::endl;
	}
}
