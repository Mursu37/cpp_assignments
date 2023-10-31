#include <iostream>
using namespace std;

int takeUserInput(int min, int max) {
	int userInput;
	while (true) {
		cout << "Arvaa luku (" << min << "-" << max << ") : ";
		cin >> userInput;
		if (userInput < min || userInput > max) {
			cout << userInput << " ei ole halutulta väliltä. Anna uusi arvo \n";
		}
		else {
			return userInput;
		}
	}
}