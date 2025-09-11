/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 11:25:27 by rbardet-          #+#    #+#             */
/*   Updated: 2025/09/10 20:31:31 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <stack>
#include <cstring>

#define WRONGARGNB "Error: only 1 arg allowed"
#define WRONGARG "Error: character allowed (number between [0-9], arithmetic operator[+, -, *, /]) with a space between arg"
#define ZERODIVISION "Error: Couldn't perform the operation due to a division by 0"
#define INVALIDNOTATION "Error: Invalid reverse polish notation"
class RPN {
public:
	RPN();
	RPN(const RPN &src);
	void operator=(const RPN &src);
	~RPN();

	static void		reversePolish(const char *av);
};

class WrongArg : public std::exception {
	public:
		const char* what() const throw()
		{
			return (WRONGARG);
		}
};
class zeroDivision : public std::exception {
	public:
		const char* what() const throw() {
			return (ZERODIVISION);
		}
};
class invalidNotation : public std::exception {
	public:
		const char* what() const throw() {
			return (INVALIDNOTATION);
		}
};
