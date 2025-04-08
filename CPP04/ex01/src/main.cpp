/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 08:03:43 by rbardet-          #+#    #+#             */
/*   Updated: 2025/04/05 08:30:05 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/WrongCat.hpp"

// int main()
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();

// 	delete j;
// 	delete i;
// 	return 0;
// }

int main()
{
	Animal* j = new Dog();
	Animal* i = new Cat();

	Animal* k(i);
	
	std::cout << k->getType() << std::endl;
	i->setType("Other type of cat");
	std::cout << k->getType() << std::endl;
	delete j;
	delete i;
	return 0;
}

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