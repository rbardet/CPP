/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:31:42 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/24 09:31:59 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "contact.hpp"
#include <iostream>
#include <iomanip>
#include <string.h>
#include <stdlib.h>

class phonebook
{
private:
	contact	contacts[8];
	int		index;
	int		nb_contact;
public:
	phonebook(void);
	void		add_contact(void);
	void		show_contact(void);
	void		search_contact(void);
	~phonebook(void);
};

#endif
