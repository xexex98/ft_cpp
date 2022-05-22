#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main(int argc, char **argv) {

	char c;
	
	if (argc <= 1) {
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "";
	}
	for (int i = 1; i < argc; i++) {
		int j = 0;
		while (argv[i][j]) {
			c = toupper(argv[i][j]);
			argv[i][j] = c;
			j++;
		}
		cout << argv[i] << "";
	}
	cout << endl;
	return (0);
}
