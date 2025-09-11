/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 06:59:43 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/28 07:49:41 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <ctime>

class Base
{
public:
	virtual ~Base() {};
};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

class A : public Base
{
public:
	A() {};
	~A() {};
};

class B : public Base
{
public:
	B() {};
	~B() {};
};

class C : public Base
{
public:
	C() {};
	~C() {};
};
