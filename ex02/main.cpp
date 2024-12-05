/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 00:06:31 by luifer            #+#    #+#             */
/*   Updated: 2024/12/05 14:46:59 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(){
	Dog* dog1 = new Dog();
	dog1->setBrainIdea("Original idea",5);

	Dog* dog2 = new Dog(*dog1); // Deep copy
	delete dog1;                // Should not affect dog2
	std::cout << dog2->getBrainIdea(5) << std::endl; // Should print "Original idea"
	delete dog2;
	return 0;
}

/*
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
	for(int i = 0; i < num; i++){
		delete animals[i];
	}

	//Extra test
	Dog* firu1 = new Dog;
	firu1->setBrainIdea(" I'm hungry", 4);
	std::cout << std::endl;

	Dog* firu2 = new Dog(*firu1);
	std::cout << "Dog1 says: "<< firu1->getBrainIdea(4) << std::endl;
	std::cout << "Dog2 says: "<< firu2->getBrainIdea(4) << std::endl;
	std::cout << std::endl;

	firu1->setBrainIdea(" Let's go for a walk", 4);
	std::cout << "Dog1 says: "<< firu1->getBrainIdea(4) << std::endl;
	std::cout << "Dog2 says: "<< firu2->getBrainIdea(4) << std::endl;
	std::cout << std::endl;

	delete firu1;
	delete firu2;
	std::cout << "\n";
	return 0;
}
*/