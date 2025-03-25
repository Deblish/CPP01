/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:01:28 by aapadill          #+#    #+#             */
/*   Updated: 2025/03/24 15:01:29 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
}

Weapon::~Weapon()
{
	std::cout << "Weapon destroyed" << std::endl;
}

const std::string &Weapon::getType()
{
	return (_type);
}

void Weapon::setType(std::string type)
{
	_type = type;
}