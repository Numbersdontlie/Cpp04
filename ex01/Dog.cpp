/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 23:14:01 by luifer            #+#    #+#             */
/*   Updated: 2024/12/03 12:35:25 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

//Default constructor
Dog::Dog() : Animal() {
    this->_type = "Dog";
    std::cout << BLUE << " 🐶 🐶 🐶 Dog with default constructor created " << RESET << std::endl;
}

//Copy constructor
Dog::Dog(const Dog& input) : Animal(input) {
    std::cout << BLUE << " 🐶 🐶 🐶 Dog with copy constructor created " << RESET << std::endl;
}

//Overload constructor
Dog& Dog::operator=(const Dog& input){
    if(this != &input)
        _type = input._type;
    std::cout << BLUE << " 🐶 🐶 🐶 Dog with overload constructor created " << RESET << std::endl;
    return (*this);
}

//Destructor
Dog::~Dog(){
    std::cout << RED << " Dog object destroyed 😢 😢 😢 " << RESET << std::endl;
}

void Dog::makeSound() const{
    std::cout << GREEN << " 🐕‍🦺 Woof Woof 🐕‍🦺" << RESET << std::endl;
}
