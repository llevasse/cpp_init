/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:52:35 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/09 22:51:03 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(){
	const Animal*	primal = new Animal();
	const Animal*	d = new Dog();
	const Animal*	c = new Cat();

	d->makeSound();
	primal->makeSound();

	delete primal;
	delete d;
	delete c;
}
