/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:53:26 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/11 00:09:41 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <iomanip>

class contact
{
private:
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phonenumber;
	std::string	darksecret;
public:
	contact(void);
	void	contact_data();
	void	show_contact(int id);
	void	add_contact();
	~contact(void);
};

#endif
