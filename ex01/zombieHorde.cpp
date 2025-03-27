/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 10:58:18 by aapadill          #+#    #+#             */
/*   Updated: 2025/03/27 15:23:30 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *horde = nullptr;

	horde = new Zombie[N];
	if (!horde)
		return (nullptr);
	for (int i = 0; i < N; i++)
	{
		horde[i].setName(name);
	}
	return (horde);
}
