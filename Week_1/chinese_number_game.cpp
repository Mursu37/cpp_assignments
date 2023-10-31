/*
#include <iostream>
#include <limits>
using namespace std;

int main() 
{
	cout << "Pelataan kiinalaista numeropelia! \n";
	int userInput;
	while (true)
	{
		cout << "Anna luku: ";
		cin >> userInput;
		
		if (userInput == 0) 
		{
			cout << "Peli loppui \n";
			return 0;
		}
		else if (userInput == numeric_limits<int>::max()) {
			cout << "Tasapeli \n";
			return 0;
			// std::cin loppuu toimimasta jos annettu numero on yli 2147483647 vaikka debugger sanoo että userInput on 2147483647. Miksi?
		}
		else
		{
			cout << "Voitin, minun on " << userInput + 1 << "!\n";
		}
	}
	return 0;
}
*/