/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:52:35 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/09 23:17:48 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(){
	const Animal*	primal = new Animal();
	const Animal*	dog = new Dog();
	const Animal*	cat = new Cat();

	std::cout << std::endl;

	//real :3 !
	
	std::cout << "Type : " << dog->getType() << std::endl;
	dog->makeSound();
	std::cout << "Type : " << cat->getType() << std::endl;
	cat->makeSound();
	std::cout << "Type : " << primal->getType() << std::endl;
	primal->makeSound();

	delete cat;
	delete dog;
	delete primal;
	// wrong >:( !!
	std::cout << std::endl;
	std::cout << std::endl;
	const WrongAnimal*	wrongPrimal = new WrongAnimal();
	const WrongAnimal*	wrongCat = new WrongCat();

	std::cout << "Type : " << wrongCat->getType() << std::endl;
	wrongCat->makeSound();
	std::cout << "Type : " << wrongPrimal->getType() << std::endl;
	wrongPrimal->makeSound();
	
	std::cout << std::endl;
	delete wrongCat;
	delete wrongPrimal;

}
