/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 09:12:37 by aapadill          #+#    #+#             */
/*   Updated: 2025/03/27 15:26:40 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	randomChump("Stacky");

	Zombie* heapy = newZombie("Heapy");
	if (!heapy)
		return 1;
	heapy->announce();
	delete heapy;
}
