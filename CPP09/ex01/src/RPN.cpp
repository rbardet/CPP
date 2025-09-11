/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 11:25:52 by rbardet-          #+#    #+#             */
/*   Updated: 2025/09/10 20:30:50 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

RPN::RPN() {}
RPN::RPN(const RPN &src) {(void)src;}
void RPN::operator=(const RPN &src) {(void)src;}
RPN::~RPN() {}

static bool isOperator(int i) {
	if (i != '+' && i != '-' && i != '/' && i != '*')
		return (false);
	return (true);
}

static bool	isValidArg(const std::string &av) {
	if (av.at(av.length() - 1) == ' ')
		return (false);

	std::string scam = " ";
	std::string::const_iterator prev = scam.begin();

	int nbOp = 0;
	int nbNb = 0;
	for (std::string::const_iterator it = av.begin(); it != av.end(); it++) {
		if(it != av.begin()) {
			prev = it;
			prev--;
		}

		if (!isOperator(*it) && !isdigit(*it) && *it != ' ')
			return (false);

		if (*it == ' ' && !isOperator(*prev) && !isdigit(*prev))
			return (false);

		if ((isOperator(*it) || isdigit(*it)) && *prev != ' ')
			return (false);

		if (isOperator(*it))
			nbOp++;
		else if (isdigit(*it))
			nbNb++;
	}

	if ((nbNb - 1) != nbOp)
		throw(invalidNotation());
	return (true);
}

static void	logicalOp(std::stack<int> &st, int op) {
	if (st.empty())
		throw(invalidNotation());
	int nb1 = st.top();
	st.pop();
	if (st.empty())
		throw(invalidNotation());
	int nb2 = st.top();
	st.pop();

	if (nb1 == 0 && op == '/')
		throw(zeroDivision());

	int result;
	switch (op) {
	case '+':
		result = nb2 + nb1;
		break;
	case '-':
		result = nb2 - nb1;
		break;
	case '*':
		result = nb2 * nb1;
		break;
	case '/':
		result = nb2 / nb1;
		break;
	default:
		break;
	}
	st.push(result);
}

void	RPN::reversePolish(const char *av) {
	std::string tmp(av);

	if (!isValidArg(tmp))
		throw(WrongArg());

	std::stack<int> st;

	for (std::string::const_iterator it = tmp.begin(); it != tmp.end(); it++)
	{
		if (isdigit(*it))
			st.push(std::atoi(it.base()));
		else if (isOperator(*it))
			logicalOp(st, *it);
	}
	std::cout << st.top() << std::endl;
}
