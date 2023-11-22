#include <iostream>
#include <thread>

using namespace std;

class Hand
{
private:
	int _time = 0;
	string _type;
	int _maximumValue = 0;
	Hand* _next = nullptr;

public:
	Hand(int type, int value, Hand* next = nullptr)
	{
		switch (type)
		{
		case 0:
			_type = "Hours";
			_maximumValue = 24;
			_next = next;
			break;
		case 1: 
			_type = "Minutes";
			_maximumValue = 60;
			_next = next;
			break;
		case 2:
			_type = "Seconds";
			_maximumValue = 60;
			_next = next;
			break;
		default:
			cout << "Type not valid";
			break;
		}

		_time = value;
	}

	void show() 
	{
		cout << _type << ": " << _time << "\n";
	}

	void update_time() 
	{
		_time++;
		if (_time % _maximumValue == 0) 
		{
			_time = 0;
			if (_next) {
				_next->update_time();
			}
			// return true;
		}
		else
		{
			// return false;
		}
	}
};


class Clock
{
private:
	Hand* hours;
	Hand* minutes;
	Hand* seconds;

public:
	
	Clock(int h, int m, int s)
	{
		hours = new Hand(0, h);
		minutes = new Hand(1, m, hours);
		seconds = new Hand(2, s, minutes);
	};

	~Clock() 
	{
		delete hours;
		delete minutes;
		delete seconds;
	}

	void show() 
	{
		hours->show();
		minutes->show();
		seconds->show();
	}

	void update()
	{
		seconds->update_time();
		/*
		bool loop = (seconds->update_time()) ? true : false;
		
		if (loop && minutes->update_time()) {
			hours->update_time();
		}
		*/
	}
};

int main() {
	Clock clock(0, 0, 0);
	while (true)
	{
		clock.update();
		clock.show();
		//this_thread::sleep_for(1000ms);	
	}
	return 0;
}