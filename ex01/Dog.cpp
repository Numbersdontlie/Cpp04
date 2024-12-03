/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 23:14:01 by luifer            #+#    #+#             */
/*   Updated: 2024/12/03 17:33:29 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

//Default constructor
Dog::Dog() : Animal(), _brain(new Brain()) {
    this->_type = "Dog";
    std::cout << BLUE << " 🐶 🐶 🐶 Dog with default constructor created " << RESET << std::endl;
}

//Copy constructor
Dog::Dog(const Dog& input) : Animal(input), _brain(new Brain(*input._brain)) {
    std::cout << BLUE << " 🐶 🐶 🐶 Dog with copy constructor created " << RESET << std::endl;
}

//Overload constructor
Dog& Dog::operator=(const Dog& input){
    if(this != &input){
        Animal::operator=(input);
        delete this->_brain;
        this->_brain = new Brain(*input._brain);
    }
    std::cout << BLUE << " 🐶 🐶 🐶 Dog with overload constructor created " << RESET << std::endl;
    return (*this);
}

//Destructor
Dog::~Dog(){
    delete this->_brain;
    std::cout << RED << " Dog object destroyed 😢 😢 😢 " << RESET << std::endl;
}

void Dog::makeSound() const{
    std::cout << GREEN << " 🐕‍🦺 Woof Woof 🐕‍🦺" << RESET << std::endl;
}

//Setter
void Dog::setBrainIdea(std::string idea, int n){ this->_brain->setIdeas(idea, n); }

//Getter
std::string Dog::getBrainIdea(int n) const {return (this->_brain->getIdeas(n)); }