/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneyt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:17:16 by sneyt             #+#    #+#             */
/*   Updated: 2022/11/21 14:38:24 by sneyt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string check_replace(std::string line, std::string str1, std::string str2)
{
	size_t result;
	size_t len1 = str1.length();
	size_t len2 = str2.length();

	result = line.find(str1);
	while (result != std::string::npos)
	{
		line.erase(result, len1);
		line.insert(result, str2);
		result = line.find(str1, result + len2);
	}
	return (line);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	std::ifstream in_file;
	std::ofstream out_file;
	std::string str1 = std::string(argv[2]);
	std::string str2 = std::string(argv[3]);
	std::string line;

	in_file.open(argv[1], std::fstream::in);
	if (!in_file.is_open())
	{	
		std::cout << "Error opening input file!" << std::endl;
		return (1);
	}
	out_file.open(std::string(argv[1]).append(".replace"), std::fstream::out);
	if (!out_file.is_open())
	{
		std::cout << "Error opening output file!" << std::endl;
		return (1);
	}
	while (getline(in_file, line))
	{
		line = check_replace(line, str1, str2);	
		out_file << line << std::endl;
	}
	in_file.close();
	out_file.close();
	return (0);
}
