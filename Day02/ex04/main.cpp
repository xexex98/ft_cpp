// rle
// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   main.cpp                                           :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2022/06/13 22:03:58 by mbarra            #+#    #+#             */
// /*   Updated: 2022/06/14 00:18:53 by mbarra           ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

void ft_replace(std::ifstream& infile, std::string s1, std::string s2){
	std::string inputFileText;
	std::ofstream outfile("as.replaced");
	
	while (std::getline(infile, inputFileText)){
		if(inputFileText.find(s1) != std::string::npos){
			int findPos = inputFileText.find(s1);
			inputFileText.erase(findPos, s1.length());
			inputFileText.insert(findPos, s2);
			outfile << inputFileText << std::endl;
		}else{
			outfile << inputFileText << std::endl;
		}
	}
	outfile.close();
}

int main(int argc, char **argv)
{
	if(argc != 4){
		std::cout << "Invalid input!" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::string inputFileName = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream infile(inputFileName);
	if(!infile){
		std::cout << "No read file!" << std::endl;
		exit(EXIT_FAILURE);
	}
	ft_replace(inputFileName s1, s2);
	infile.close();
	return (0);
}
