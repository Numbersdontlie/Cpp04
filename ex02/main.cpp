/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 00:06:31 by luifer            #+#    #+#             */
/*   Updated: 2024/12/03 16:45:29 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main(){
	//Basic test
	const int num = 20;
	Animal* animals[num];
	std::cout << "\n";
	
	//Filling first 1/2 of array with dogs
	for(int i = 0; i < (num / 2); i++){
		animals[i] = new Dog();
	}
	//Filling second 1/2 of array with cats
	for(int i = (num / 2); i < num; i++){
		animals[i] = new Cat();
	}
	std::cout << "\n";
	//Checking the array and sound
	for(int i = 0; i < num; i++){
		std::cout << BLUE << animals[i]->getType() << " : " << RESET << std::endl;
		animals[i]->makeSound();
	}
	std::cout << "\n";
	return 0;
}