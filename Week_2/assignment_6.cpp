#include <iostream>
using namespace std;

int calc_length(char *p) {
	int lenght = 0;
	while (true) {
		if (p[lenght] == '\0') {
			return lenght;
		}
		else
		{
			lenght++;
		}

		//infinity looppien v�ltt�miseksi testauksen aikana
		if (lenght > 9999) {
			return lenght;
		}
	}
}

int main() {
	char mjono[] = "Hello";
	cout << "Merkkijonon pituus: " << calc_length(mjono);
	return 1;
}