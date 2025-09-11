/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 11:46:33 by rbardet-          #+#    #+#             */
/*   Updated: 2025/05/02 12:47:49 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack(const MutantStack &src) {this->c = src.c;}

template<typename T>
void	MutantStack<T>::operator=(const MutantStack &src) {this->c = src.c;}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {return(this->c.begin());}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {return(this->c.end());}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin() {return(this->c.rbegin());}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend() {return(this->c.rend());}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cbegin() {return(this->c.begin());}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cend() {return(this->c.end());}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crbegin() {return(this->c.rbegin());}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crend() {return(this->c.rend());}
