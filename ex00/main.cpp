/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 00:06:31 by luifer            #+#    #+#             */
/*   Updated: 2024/12/05 13:23:05 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(){
	//Basic test
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

	//Test cat copy constructor
	Cat* cat1 = new Cat;
	Cat* cat2 = new Cat(*cat1);
	std::cout << "\n";
	std::cout << BLUE << cat1->getType() << " : " << RESET << std::endl;
	cat1->makeSound();
	std::cout << BLUE << cat2->getType() << " : " << RESET << std::endl;
	cat2->makeSound();
	std::cout << "\n";
	delete cat1;
	delete cat2;
	std::cout << "\n";

	//Test dog overload operator
	Animal* dog1 = new Dog();
	Animal* dog2 = new Dog();
	*dog1 = *dog2;
	std::cout << "\n";
	std::cout << BLUE << dog1->getType() << " : " << RESET << std::endl;
	dog1->makeSound();
	std::cout << BLUE << dog2->getType() << " : " << RESET << std::endl;
	dog2->makeSound();
	delete dog1;
	delete dog2;
	std::cout << "\n";

	//Testing wrong animals
	WrongAnimal* wrong1 = new WrongAnimal();
	WrongAnimal* wrong2 = new WrongCat();
	std::cout << "\n";
	std::cout << BLUE << wrong1->getType() << " : " << RESET << std::endl;
	wrong1->makeSound();
	std::cout << BLUE << wrong2->getType() << " : " << RESET << std::endl;
	wrong2->makeSound();
	delete wrong1;
	delete wrong2;
	std::cout << "\n";
	return 0;
}