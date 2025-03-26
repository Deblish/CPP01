/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapadill <aapadill@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 12:10:30 by aapadill          #+#    #+#             */
/*   Updated: 2025/03/26 18:44:35 by aapadill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string replaceString(std::string content, const std::string& s1, const std::string& s2)
{
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
		std::cerr << "Usage: ./sed_4_losers <filename> <find> <replace>" << std::endl;
		return 0;
	}
	//if (argv[1]) //is directory
	if (!*argv[2]) //if s1 is empty
	{
		std::cerr << "<find> cannot be empty" << std::endl;
		return 0;
	}
	std::ifstream fin; //check if folder or empty
	std::ofstream fout;
	fin.open(argv[1]);
	fout.open(std::string(argv[1]) + ".replace");
	if (!fin.is_open() || !fout.is_open())
	{
		std::cerr << "Error while opening any of the files, can't proceed" << std::endl;
		return 1;
	}
	//if argv[2] == argv[3] do nothing?
	std::string line;
	while (getline(fin, line, '\0'))
		fout << replaceString(line, argv[2], argv[3]);
	return 0;
}
