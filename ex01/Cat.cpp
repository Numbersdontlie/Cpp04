/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 23:53:53 by luifer            #+#    #+#             */
/*   Updated: 2024/12/05 13:41:27 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

//Default constructor
Cat::Cat() : Animal (), _brain(new Brain()) {
	this->_type = "Cat";
	std::cout << BLUE << "  🐱‍💻 🐱‍💻 🐱‍💻 Cat with default constructor created " << RESET << std::endl;
}

//Copy constructor
Cat::Cat(const Cat& input) : Animal(input), _brain(new Brain(*input._brain)) {
	std::cout << BLUE << "  🐱‍💻 🐱‍💻 🐱‍💻 Cat with copy constructor created " << RESET << std::endl;
}

//Overload constructor
Cat& Cat::operator=(const Cat& input){
	if (this != &input){
		Animal::operator=(input);
		delete this->_brain;
		this->_brain = new Brain(*input._brain);
	}
	std::cout << BLUE << " 🐱‍💻 🐱‍💻 🐱‍💻 Cat with overload constructor created " << RESET << std::endl;
	return (*this);
}

//Destructor
Cat::~Cat(){
	std::cout << RED << " 😿 😿 😿 Cat destroyed" << RESET << std::endl;
	delete this->_brain;
}

//Make sounds
void Cat::makeSound() const{
    std::cout << GREEN << " 😼 😼 😼 Miau Miau " << RESET << std::endl;
}

//Setter
void Cat::setBrainIdea(std::string idea, int n){this->_brain->setIdeas(idea ,n); }

//Getter
std::string Cat::getBrainIdea(int n) const {return (this->_brain->getIdeas(n)); }