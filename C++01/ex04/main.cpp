/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:43:48 by jomirand          #+#    #+#             */
/*   Updated: 2023/10/31 15:57:44 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

std::string	compare_strings(std::string line, std::string s1, std::string s2)
{
	size_t	buffer;
	while(1)
	{
		buffer = line.find();
		if(buffer = std::string::npos)
			break;
		
	}
}

int	main(int argc, char **argv)
{
	if(argc != 4)
	{
		std::cerr << "Invalid number of arguments. Try again." << std::endl;
		return (1);
	}
	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	std::ifstream	file;
	std::ofstream	fileReplace;

	std::string		file_name = argv[1];
	std::string		filereplace_name = argv[1];
	filereplace_name.append(".replace");

	const char*	og_file = file_name.c_str();
	const char*	replace_file = filereplace_name.c_str();

	file.open(og_file);
	if(!file.is_open())
	{
		std::cerr << "Error while opening original file." << std::endl;
		return(1);
	}
	fileReplace.open(replace_file);
	if(!fileReplace.is_open())
	{
		std::cerr << "Error while opening .replace file." << std::endl;
		return(1);
	}
	std::string	line;

	while(getline(file, line))
	{
		line = compare_strings(line, s1, s2);
		fileReplace << line << std::endl;
	}
	file.close();
	fileReplace.close();

}