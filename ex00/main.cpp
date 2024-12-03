/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 00:06:31 by luifer            #+#    #+#             */
/*   Updated: 2024/12/03 12:28:57 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(){
	const Animal* animal1 = new Animal();
	Animal* animal2 = new Cat();
	Animal* animal3 = new Dog();
	std::cout << "\n";

	std::cout << BLUE << animal1->getType() << " : " << RESET << std::endl;
	animal1->makeSound();
	std::cout << BLUE << animal2->getType() << " : " << RESET << std::endl;
	animal2->makeSound();
	std::cout << BLUE << animal3->getType() << " : " << RESET << std::endl;
	animal3->makeSound();
	std::cout << "\n";

	delete animal1;
	delete animal2;
	delete animal3;
	std::cout << "\n";
	return 0;
}