/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 23:53:53 by luifer            #+#    #+#             */
/*   Updated: 2024/12/03 00:03:29 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

//Default constructor
Cat::Cat() : Animal (), type("Cat"){
	std::cout << BLUE << "  🐱‍💻 🐱‍💻 🐱‍💻 Cat with default constructor created " << RESET << std::endl;
}

//Copy constructor
Cat::Cat(const Cat& input) : Animal(input), type("Cat"){
	std::cout << BLUE << "  🐱‍💻 🐱‍💻 🐱‍💻 Cat with copy constructor created " << RESET << std::endl;
} 

//Overload constructor
Cat& operator=(const Cat& input){
	if (this == &input)
		return (*this);
	Cat::operator=(input);
	this->_type = input.type;
	std::cout << BLUE << " 🐱‍💻 🐱‍💻 🐱‍💻 Cat with overload constructor created " << RESET << std::endl;
	return (*this);
}

//Destructor
Cat::~Cat(){
	std::cout << RED << " 😿 😿 😿 Cat destroyed" << RESET << std::endl;
}

Cat::makeSound(){
    std::cout << GREEN << " 😼 😼 😼 Miau Miau " << RESET << std::endl;
}