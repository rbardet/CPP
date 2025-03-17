/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 22:24:24 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/18 00:37:57 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <fstream>

void	replace(std::ifstream &infile, std::ofstream &outfile, std::string s1, std::string s2)
{
	std::string	line;
	size_t		pos;

	while (std::getline(infile, line))
	{
		while (1)
		{
			pos = line.find(s1);
			if (pos == std::string::npos)
				break ;
			line = line.substr(0, pos) + s2 + line.substr(pos + s1.length(), line.length());
		}
		outfile << line << std::endl;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage : filename s1 s2" << std::endl;
		return (1);
	}
	std::ifstream infile(argv[1]);
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (!infile.is_open())
	{
		std::cout << "Error : couldn't open input file" << std::endl;
		return (false);
	}
	std::string out_name = argv[1];
	out_name += ".replace";
	std::ofstream outfile(out_name.c_str());
	if (!outfile.is_open())
	{
		std::cout << "Error : couldn't open output file" << std::endl;
		return (1);
	}
	replace(infile, outfile, s1, s2);
	return (0);
}
