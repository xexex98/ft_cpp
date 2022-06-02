#include <iostream>
#include <string>
#include <ctype.h>


int main(int argc, char **argv) {

	char c;
	
	if (argc <= 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	for (int i = 1; i < argc; i++) {
		int j = 0;
		while (argv[i][j]) {
			c = std::toupper(argv[i][j]);
			argv[i][j] = c;
			j++;
		}
		std::cout << argv[i] << "";
	}
	std::cout << std::endl;
	return (0);
}
