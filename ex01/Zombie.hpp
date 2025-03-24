/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 10:57:51 by aapadill          #+#    #+#             */
/*   Updated: 2025/03/24 10:57:52 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie();
		//Zombie(std::string name);
		~Zombie();

		void setName(std::string name);
		void announce();
};

Zombie* zombieHorde(int N, std::string name);
