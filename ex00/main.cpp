/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 00:06:31 by luifer            #+#    #+#             */
/*   Updated: 2024/12/03 00:09:55 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(){
    Dog dog;
    Cat cat;

    std::cout << BLUE << " Dog make a sound" << RESET << std::endl;
    dog.makeSound();
    std::cout << BLUE << " Now you cat make a sound" << RESET << std::endl;
    cat.makeSound();
    return (0);
}