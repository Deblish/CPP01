/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 10:50:30 by aapadill          #+#    #+#             */
/*   Updated: 2025/03/26 10:50:31 by aapadill         ###   ########.fr       */
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

void Harl::non_existent(void)
{
	std::cout << "\nYou're trying to complain about something, but you're not sure what exactly it is..\nhave you broke the matrix? Hmmm... *Cymbal monkey making noises in the background*" << std::endl;
}

void Harl::complain(std::string level)
{
	int i = -1;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*complaints[5])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::non_existent};
	while (++i+1 && i < 4 && levels[i] != level)
		;
	return (this->*complaints[i])();
}