/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 23:51:05 by luifer            #+#    #+#             */
/*   Updated: 2024/12/05 13:27:16 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

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