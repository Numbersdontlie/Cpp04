/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 23:37:49 by luifer            #+#    #+#             */
/*   Updated: 2024/12/05 13:27:28 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

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