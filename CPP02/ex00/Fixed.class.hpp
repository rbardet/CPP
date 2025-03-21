/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 20:48:17 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/19 23:30:11 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>
#include <iomanip>

class Fixed
{
private:
	/* data */
public:
	Fixed(/* args */);
	int getRawBits(void) const;
	void setRawBits( int const raw );
	~Fixed(void);
};


