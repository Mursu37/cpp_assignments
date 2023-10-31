#include <random>
#include <iostream>
using namespace std;

int randomNumber(int min, int max) {
	random_device r;
	mt19937 mt(r());
	uniform_int_distribution<> randomNumber(min, max);
	return randomNumber(mt);
}