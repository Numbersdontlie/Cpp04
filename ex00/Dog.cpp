/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 23:14:01 by luifer            #+#    #+#             */
/*   Updated: 2024/12/02 23:41:43 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

//Default constructor
Dog::Dog() : Animal(), type("Dog") {
    std::cout << BLUE << " 🐶 🐶 🐶 Dog with default constructor created" << RESET << std::endl;
}

//Copy constructor
Dog::Dog(const Dog& input) : Animal(input), type("Dog"){
    std::cout << BLUE << " 🐶 🐶 🐶 Dog with copy constructor created" << RESET << std::endl;
}
