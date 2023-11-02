/*
#include<iostream>
using namespace std;

void sum_pointer(int* x, int* y, int* sum) {
	*sum = *x + *y;
}

void sum_reference(int &x, int &y, int &sum) {
	sum = x + y;
}

int main() {
	int x, y, sum;
	x = 3;
	y = 2;
	sum = 0;
	sum_pointer(&x, &y, &sum);
	cout << sum << endl;
	sum_reference(x, y, sum);
	cout << sum << endl;
}
*/