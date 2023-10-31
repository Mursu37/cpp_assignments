#include <iostream>
#include "functions.h"
using namespace std;

int main() {
	int userInput, targetNumber, guessCount, min, max;
	cout << "Anna arvattavan luvun min ja max arvot: \n";
	cin >> min;
	cin >> max;
	targetNumber = randomNumber(min, max);
	guessCount = 0;
	while (true) {
		userInput = takeUserInput(min, max);
		guessCount++;
		bool guessResult = checkGuess(userInput, targetNumber, guessCount);
		if (guessResult) 
		{
			return 0;
		}
	}
}