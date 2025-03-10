/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:31:42 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/10 17:53:45 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "contact.class.hpp"
#include <iostream>
#include <iomanip>
#include <string.h>
#include <stdlib.h>

class phonebook
{
private:
	contact contacts[8];
public:
	phonebook(void);
	std::string trunc_data(std::string data);
	void	phonebook::show_contact(phonebook directory, int j);
	~phonebook(void);
};

#endif
