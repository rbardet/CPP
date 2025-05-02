/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 10:36:16 by rbardet-          #+#    #+#             */
/*   Updated: 2025/05/02 12:54:27 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef	typename std::stack<T>::container_type::iterator				iterator;
	typedef	typename std::stack<T>::container_type::reverse_iterator		reverse_iterator;
	typedef	typename std::stack<T>::container_type::const_iterator			const_iterator;
	typedef	typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator;

	MutantStack() {};
	MutantStack(const MutantStack &src);
	void	operator=(const MutantStack &src);
	~MutantStack() {};

	iterator				begin();
	iterator				end();
	reverse_iterator		rbegin();
	reverse_iterator		rend();
	const_iterator			cbegin();
	const_iterator			cend();
	const_reverse_iterator	crbegin();
	const_reverse_iterator	crend();
};

#include "MutantStack.tpp"
