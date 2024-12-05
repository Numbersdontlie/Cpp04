/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 00:06:31 by luifer            #+#    #+#             */
/*   Updated: 2024/12/05 13:59:37 by lperez-h         ###   ########.fr       */
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
	const int num = 10;
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
	for (int i = 0; i < num; i++){
		delete animals[i];
	}
	
	//Test cat operator overload
	Cat* meow1 = new Cat;
	meow1->setBrainIdea("I am a Tiger 🐯", 1);
	meow1->makeSound();
	std::cout << GREEN << meow1->getBrainIdea(1) << RESET << std::endl;
	std::cout << "\n";
	
	Cat* meow2 = new Cat();
	*meow2 = *meow1; 
	std::cout << GREEN << " 1st cat says:" << meow1->getBrainIdea(1) << RESET << std::endl;
	std::cout << GREEN << " 2nd cat says:" << meow2->getBrainIdea(1) << RESET << std::endl;
	std::cout << "\n";
	std::cout << "\n";
	delete meow1;
	delete meow2;

	//Test dog copy constructor
	Dog* woof1 = new Dog;
	woof1->setBrainIdea("I am a Wolf 🐺", 2);
	woof1->makeSound();
	Dog* woof2 = new Dog(*woof1);
	std::cout << GREEN << " 1st doggo says:" << woof1->getBrainIdea(2) << RESET << std::endl;
	std::cout << GREEN << " 2nd doggo says:" << woof2->getBrainIdea(2) << RESET << std::endl;
	std::cout << "\n";
	woof1->setBrainIdea("I am a Husky 🐕", 2);
	std::cout << GREEN << " 1st doggo says:" << woof1->getBrainIdea(2) << RESET << std::endl;
	std::cout << GREEN << " 2nd doggo says:" << woof2->getBrainIdea(2) << RESET << std::endl;
	std::cout << "\n";
	delete woof1;
	delete woof2;
	return 0;
}

/*
int main() {
    Dog basic;
    {
        Dog tmp = basic;
    } // tmp goes out of scope and is destroyed

    std::cout << "Back in main scope\n";

    return 0;
}
*/