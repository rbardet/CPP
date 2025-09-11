/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 08:03:43 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/23 18:01:06 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/WrongCat.hpp"

// int	main()
// {
// 	const	Animal *animal[100];

// 	for (size_t i = 0; i < 50; i++)
// 		animal[i] = new Dog();
// 	for (size_t i = 50; i < 100; i++)
// 		animal[i] = new Cat();
// 	for (size_t i = 0; i < 100; i++)
// 		std::cout << animal[i]->getType() << std::endl;
// 	for (size_t i = 0; i < 100; i++)
// 		delete	animal[i];
// 	return (0);
// }

int	main()
{
	Dog	*dog1 = new Dog();
	Cat	*cat1 = new Cat();

	cat1->fill_ideas("Running");
	dog1->fill_ideas("Playing");

	Cat	*cat2 = new Cat(*cat1);
	Dog	*dog2 = new Dog(*dog1);
	dog2->get_ideas();
	cat2->get_ideas();
	dog1->fill_ideas("SE VOMI DESSUS");
	cat1->fill_ideas("Sleeping");
	dog2->get_ideas();
	cat2->get_ideas();
	delete dog1;
	delete dog2;
	delete cat1;
	delete cat2;
	return (0);
}
