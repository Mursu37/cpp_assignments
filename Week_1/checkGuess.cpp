#include <iostream>
using namespace std;

bool checkGuess(int number, int targetNumber, int guessCount) {

	if (number > targetNumber)
	{
		cout << "Liian suuri!\n";
		return false;
	}
	else if (number < targetNumber)
	{
		cout << "Liian pieni! \n";
		return false;
	}
	else
	{
		cout << "Oikein! Teit " << guessCount << " arvausta. \n";
		return true;
	}
}