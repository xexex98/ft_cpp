/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 22:03:58 by mbarra            #+#    #+#             */
/*   Updated: 2022/06/13 23:03:13 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void ft_copy(std::string infile, std::string s1, std::string s2)
{
		while(!infile.eof()){
			std::string line;
			infile >> line;
			outfile << (line == s1 ? s2 : line) << " ";
	}
	return ;
}

int main(int argc, char **argv)
{
	if(argc != 4){
		std::cout << "Invalid input!" << std::endl;
		return(-2);
	}
	std::ifstream infile(argv[1]);
	if(!infile){
		std::cout << "No read file!" << std::endl;
		return (-1);
	}

	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string name = argv[1];
	std::ofstream outfile(name + ".replaced");


	infile.close();
	outfile.close();
	return (0);
}