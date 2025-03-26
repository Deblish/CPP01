/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 10:57:37 by aapadill          #+#    #+#             */
/*   Updated: 2025/03/26 18:11:39 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//add try catch and clean properly
int main(void)
{
	Zombie *horde = nullptr;
	horde = zombieHorde(30, "zombie");
	if (!horde)
	{
		std::cout << "Allocation error" << std::endl;
		return (1);
	}
	for (int i = 0; i < 30; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}
