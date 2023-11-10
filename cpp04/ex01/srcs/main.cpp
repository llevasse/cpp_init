/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:52:35 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/10 18:53:03 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(){
	Animal	*animals[10];
	for (int i=0;i<10;i++){
		if (i%2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << std::endl << std::endl;

	for (int i=9;i>=0;i--){
		delete animals[i];
	}
}
