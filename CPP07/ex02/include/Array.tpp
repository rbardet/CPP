/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 12:54:53 by rbardet-          #+#    #+#             */
/*   Updated: 2025/05/04 23:53:12 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"


template<typename T>
Array<T>::Array() : _size(0) {this->array = new T[0];}

template<typename T>
Array<T>::Array(const Array &src) : _size(src._size)
{
	this->array = new T[this->_size];
	for(size_t i = 0; i < this->_size; i++)
		this->array[i] = src.array[i];
}

template<typename T>
Array<T> &Array<T>::operator=(const Array &src)
{
	delete [] array;
	this->array = new T[src._size];
	this->_size = src._size;
	for(size_t i = 0; i < this->_size; i++)
		this->array[i] = src.array[i];
	return (*this);
}

template<typename T>
Array<T>::~Array() {delete [] this->array;}

template<typename T>
Array<T>::Array(const unsigned int &_size) : _size(_size) {this->array = new T[this->_size];}

template<typename T>
const unsigned int &Array<T>::size() const {return(this->_size);}

template<typename T>
T &Array<T>::operator[](const int &pos) const
{
	if (pos < 0 || static_cast<unsigned int>(pos) >= this->_size)
		throw(InvalidIndex());
	else
		return (this->array[pos]);
}
