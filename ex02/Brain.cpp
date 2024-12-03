/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:16:37 by luifer            #+#    #+#             */
/*   Updated: 2024/12/03 17:01:48 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

//Default constructor
Brain::Brain(){
	std::cout << BLUE << " 🧠 🧠 🧠 Brain default created" << RESET << std::endl;
}

//Copy constructor for brain
//it will iterate and copy the ideas of each brain
Brain::Brain(const Brain& input){
	for (int i = 0; i < 100; i++){
		ideas[i] = input.ideas[i];
	}
	std::cout << BLUE << " 🧠 🧠 🧠 Brain copy constructor created" << RESET << std::endl;
}

//Operator overload constructor
Brain& Brain::operator=(const Brain& input){
	if(this != &input){
		for (int i = 0; i < 100; i++){
			ideas[i] = input.ideas[i];
		}
	}
	std::cout<< BLUE << " 🧠 🧠 🧠 Brain operator overload created" << RESET << std::endl;
	return (*this);
}

//Destructor
Brain::~Brain(){
	std::cout << RED << " 🤯 🤯 🤯 Brain have been destroyed" << RESET << std::endl;
}

//Getter to get ideas of brain
std::string Brain::getIdeas(int n) const{
	if(n >= 0 && n <= 99)
		return (this->ideas[n]);
	return "index out of scope";
}

//Setter to set ideas of brain
void Brain::setIdeas(std::string idea, int n){
	if(n >= 0 && n <= 99)
		this->ideas[n] = idea;
}