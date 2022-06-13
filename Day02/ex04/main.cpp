
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 22:03:58 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/14 00:18:53 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

// void ft_copy(std::ifstream infile, std::string s1, std::string s2)
// {
// 	// std::string name = "as";
// 	std::ofstream outfile("as.replaced");

// 	while(!infile.eof()){
// 		std::string line;
// 		infile >> line;
// 		outfile << (line == s1 ? s2 : line) << " ";
// 	}
// 	infile.close();
// 	outfile.close();
// }

// int main(int argc, char **argv)
// {
// 	if(argc != 4){
// 		std::cout << "Invalid input!" << std::endl;
// 		return(-1);
// 	}
// 	std::string s1 = argv[2];
// 	std::string s2 = argv[3];
// 	std::ifstream infile(argv[1]);
// 	if(!infile){
// 		std::cout << "No read file!" << std::endl;
// 		return (-2);
// 	}

// 	// void ft_copy(std::ifstream, std::string s1, std::string s2);
// 	std::ofstream outfile("as.replaced");

// 	while(!infile.eof()){
// 		std::string line;
// 		infile >> line;
// 		std::string len = line;
// 		std::cout << line << " ";
// 		if(line[std::strlen(len) + 1] == '\n')
// 		outfile << (line == s1 ? s2 : line) << " ";
// 	}
// 	infile.close();
// 	outfile.close();
// 	return (0);
// }


int main(int argc, char **argv)
{
	if(argc != 4){
		std::cout << "Invalid input!" << std::endl;
		return(-1);
	}
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream infile(argv[1]);
	if(!infile){
		std::cout << "No read file!" << std::endl;
		return (-2);
	}

	// void ft_copy(std::ifstream, std::string s1, std::string s2);
	std::ofstream outfile("as.replaced");

	// while(!infile.eof()){
	// 	std::string line;
	// 	infile >> line;
	// 	std::string len = line;
	// 	std::cout << line << " ";
	// 	if(line[std::strlen(len) + 1] == '\n')
	// 	outfile << (line == s1 ? s2 : line) << " ";
	// }
	std::string text;


	while (std::getline(infile, text)){
		if (text.find("ipsum") != std::string::npos){
			int findPos = text.findPos("ipsum");
			text.erase(text[findPos], std::strlen("ipsum"));
			// for(int i = 0, i < strlen(string); i++){
			// 	string[i] = s2[i];
			// }
			// string[0] = 'a';
			std::cout << findPos << std::endl;
			// std::cout << findPos << std::endl;
		}
		outfile << text << "";

	}

	
	infile.close();
	outfile.close();
	return (0);
}
