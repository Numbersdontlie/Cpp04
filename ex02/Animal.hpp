/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 23:19:41 by luifer            #+#    #+#             */
/*   Updated: 2024/12/05 14:31:31 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

#define BLUE "\e[1;94m"
#define RED "\e[1;91m"
#define GREEN "\e[1;92m"
#define RESET "\033[0m"

class Animal
{
    protected:
        std::string _type;

    public:
        Animal();
        Animal(const Animal& input);
        Animal& operator=(const Animal& input);
        virtual ~Animal();

        //pure virtual function
        virtual void makeSound() const = 0;
        std::string getType() const;
};

#endif