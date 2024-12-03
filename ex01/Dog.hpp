/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 23:37:49 by luifer            #+#    #+#             */
/*   Updated: 2024/12/03 18:35:17 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

#define BLUE "\e[1;94m"
#define RED "\e[1;91m"
#define GREEN "\e[1;92m"
#define RESET "\033[0m"

class Dog : public Animal
{
    private:
        Brain* _brain;

    public:
        Dog();
        Dog(const Dog& input);
        Dog& operator=(const Dog& input);
        ~Dog();

        void makeSound() const;
        void setBrainIdea(std::string idea, int n);
        std::string getBrainIdea(int n) const;
};

#endif