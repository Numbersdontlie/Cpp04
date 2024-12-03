/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 23:53:53 by luifer            #+#    #+#             */
/*   Updated: 2024/12/03 12:34:17 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

//Default constructor
Cat::Cat() : Animal () {
	this->_type = "Cat";
	std::cout << BLUE << "  🐱‍💻 🐱‍💻 🐱‍💻 Cat with default constructor created " << RESET << std::endl;
}

//Copy constructor
Cat::Cat(const Cat& input) : Animal(input) {
	std::cout << BLUE << "  🐱‍💻 🐱‍💻 🐱‍💻 Cat with copy constructor created " << RESET << std::endl;
}

//Overload constructor
Cat& Cat::operator=(const Cat& input){
	if (this != &input)
		_type = input._type;
	std::cout << BLUE << " 🐱‍💻 🐱‍💻 🐱‍💻 Cat with overload constructor created " << RESET << std::endl;
	return (*this);
}

//Destructor
Cat::~Cat(){
	std::cout << RED << " 😿 😿 😿 Cat destroyed" << RESET << std::endl;
}

void Cat::makeSound() const{
    std::cout << GREEN << " 😼 😼 😼 Miau Miau " << RESET << std::endl;
}