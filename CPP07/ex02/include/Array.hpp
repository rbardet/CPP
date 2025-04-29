/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 08:40:59 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/29 05:30:21 by rbardet-         ###   ########.fr       */
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
	T					&operator[](const int &pos);
	class InvalidIndex : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return ("Index out of bounds");
			}
	};
};


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
const unsigned int &Array<T>::size() const
{
	return(this->_size);
}

template<typename T>
T &Array<T>::operator[](const int &pos)
{
	if (pos < 0 || static_cast<unsigned int>(pos) >= this->_size)
		throw(InvalidIndex());
	else
		return (this->array[pos]);
}
