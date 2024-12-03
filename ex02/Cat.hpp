/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luifer <luifer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 23:51:05 by luifer            #+#    #+#             */
/*   Updated: 2024/12/03 18:50:36 by luifer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

#define BLUE "\e[1;94m"
#define RED "\e[1;91m"
#define GREEN "\e[1;92m"
#define RESET "\033[0m"

class Cat : public Animal
{
    private:
        Brain* _brain;

    public:
        Cat();
        Cat(const Cat& input);
        Cat& operator=(const Cat& input);
        ~Cat();

        void makeSound() const;
        void setBrainIdea(std::string idea, int n);
        std::string getBrainIdea(int n) const;
};

#endif