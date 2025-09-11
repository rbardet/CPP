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
// 	const WrongAnimal* meta = new WrongAnimal();
// 	const WrongAnimal* i = new WrongCat();

// 	std::cout << meta->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;

// 	i->makeSound();
// 	meta->makeSound();

// 	delete meta;
// 	delete i;
// 	return 0;
// }

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	meta->makeSound();
	j->makeSound();
	i->makeSound();

	delete	meta;
	delete	j;
	delete	i;
	return 0;
}

// int main()
// {
// 	const Animal* meta[3];
// 	meta[0] = new Animal();
// 	meta[1] = new Dog();
// 	meta[2] = new Cat();

// 	for (size_t i = 0; i < 3; i++)
// 	{
// 		std::cout << meta[i]->getType() << " " << std::endl;
// 		meta[i]->makeSound();
// 	}
// 	for (size_t i = 0; i < 3; i++)
// 		delete	meta[i];
// 	return 0;
// }
