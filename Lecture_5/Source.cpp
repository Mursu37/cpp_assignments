#include <iostream>
#include <string>
#include <random>
using namespace std;

class Car
{
private:
	string _licence;
	int _topSpeed;
	int _currentSpeed = 0;
	float _odometer = 0;

public:
	Car()
	{
		_licence = "";
		_topSpeed = 0;
	}

	Car(string licence, int topSpeed) 
	{
		_licence = licence;
		_topSpeed = topSpeed;
	}

	void licence(string licence) {
		_licence = licence;
	}

	void topSpeed(int topSpeed) {
		_topSpeed = topSpeed;
	}

	void accelerate(int change)
	{
		_currentSpeed += change;
		if (_currentSpeed > _topSpeed) _currentSpeed = _topSpeed;
		else if (0 > _currentSpeed) _currentSpeed = 0;
	}

	void move(float time)
	{
		_odometer += time * _currentSpeed;
	}

	bool odoCheck(float target)
	{
		if (_odometer >= target) {
			cout << "winner is: " << _licence << "\n";
			return true;
		}
		return false;
	}

	void log_stats() 
	{
		cout << "\n" << "...new print..." << "\n";
		cout << "Licence plate: " << _licence << "\n";
		cout << "Top speed: " << _topSpeed << "\n";
		cout << "Current speed: " << _currentSpeed << "\n";
		cout << "Driven distance: " << _odometer << "\n";

	}
};

int randomNumber(int min, int max) {
	random_device r;
	mt19937 mt(r());
	uniform_int_distribution<> number(min, max);
	return number(mt);
}

int main() {

	// create 10 cars
	Car cars[10];
	for (int i = 0; i < 10; i++) 
	{
		string number = to_string(i);
		cars[i].licence("ABC-" + number);
		int speed = randomNumber(100, 200);
		cars[i].topSpeed(speed);
	}

	// race here
	bool raceOn = true;
	float targetDistance = 10000;
	while (raceOn)
	{
		for (int i = 0; i < 10; i++)
		{
			cars[i].accelerate(randomNumber(-10, 15));
			cars[i].move(1);
			if (cars[i].odoCheck(targetDistance)) raceOn = false;
		}
	}

	// log all stats
	for (Car car : cars)
	{
		car.log_stats();
	}

	return 0;
}