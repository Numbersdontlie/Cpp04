/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperez-h <lperez-h@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:08:59 by luifer            #+#    #+#             */
/*   Updated: 2024/12/05 14:43:56 by lperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

#define BLUE "\e[1;94m"
#define RED "\e[1;91m"
#define GREEN "\e[1;92m"
#define RESET "\033[0m"

class Brain
{
	private:
		std::string ideas[50];

	public:
		Brain();
		Brain(const Brain& input);
		Brain& operator=(const Brain& input);
		~Brain();

		std::string getIdeas(int n) const;
		void setIdeas(std::string idea, int n);
};

#endif