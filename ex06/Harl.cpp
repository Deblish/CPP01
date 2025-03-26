/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 10:50:30 by aapadill          #+#    #+#             */
/*   Updated: 2025/03/26 18:03:59 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month" << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl;
}

void Harl::complain(std::string level)
{
	int i = 0;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (level != levels[i] && i < 4)
		i++;
	switch (i)
	{
		case (0):
			std::cout << "[ " << levels[i++] << " ] "  << std::endl;
			debug();
			std::cout << std::endl;
		case (1):
			std::cout << "[ " << levels[i++] << " ] "  << std::endl;
			info();
			std::cout << std::endl;
		case (2):
			std::cout << "[ " << levels[i++] << " ] "  << std::endl;
			warning();
			std::cout << std::endl;
		case (3):
			std::cout << "[ " << levels[i] << " ] "  << std::endl;
			error();
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ STOP YAPPING MAN  ] "  << std::endl;
	}
}
