/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:52:35 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/27 21:25:05 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(){
	Animal	*animals[5];
	for (int i=0;i<5;i++){
		std::cout << i << " : ";
		if (i%2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	
//	animals[1] = new Animal();	//uncomment to create compile error, because Animal() is abstract
	std::cout << std::endl;
	animals[3]->setIdea(1, "I want a stick !");
	std::cout << animals[3]->getIdea(1) << std::endl;
	std::cout << animals[4]->getIdea(1) << std::endl;
	std::cout << std::endl;

	// show deep copy
	*animals[4] = *animals[3];
	std::cout << animals[3]->getIdea(1) << std::endl;
	std::cout << animals[4]->getIdea(1) << std::endl;
	std::cout << std::endl;

	animals[3]->setIdea(1, "I don't want a stick !");
	std::cout << animals[3]->getIdea(1) << std::endl;
	std::cout << animals[4]->getIdea(1) << std::endl;

	std::cout << std::endl;

	for (int i=4;i>=0;i--){
		if (animals[i]){
			std::cout << i << " : ";
			delete animals[i];
		}
	}
}
