/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 12:10:30 by aapadill          #+#    #+#             */
/*   Updated: 2025/03/25 15:58:51 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string replaceString(std::string content, const std::string& s1, const std::string& s2) {
	size_t pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos)
	{
		content.erase(pos, s1.length());
		content.insert(pos, s2);
		pos += s2.length();
	}
	return content;
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./sed_4_losers <filename> <find> <replace>" << std::endl;
		return 1;
	}
	//std::cout << argv[0] << std::endl;
	//std::cout << argv[1] << std::endl;
	//std::cout << argv[2] << std::endl;
	//std::cout << argv[3] << std::endl;
	std::ifstream fin;
	fin.open(argv[1]);

	if (fin.is_open())
	{
		std::cout << "file opened!" << std::endl;
		std::string line;
		while (getline(fin, line, '\0')) //\n wont work because of the nature of getline
		{
			if (line.empty())
				break ;
			std::cout << line << std::endl;
		}
	}
	else
	{
		std::cout << "error while opening " << argv[1] << std::endl;
		return 1;
	}
	fin.close();
	return 0;
}
