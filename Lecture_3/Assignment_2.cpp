/*
#include <iostream>

using namespace std;

int* allocate_array(int n) {
	int* t = new int[n];
	return t;
}

void read_values(int* t,  int n) {
	for (int i = 0; i < n; i++) {
		cout << "Anna arvo: ";
		cin >> t[i];
	}
}

void print_array_to_console(int* t, int n) {
	for (int i = 0; i < n; i++) {
		cout << t[i];
	}
}

int main() {
	int n;
	cout << "Anna taulukon koko: ";
	cin >> n;

	int* t = allocate_array(n);
	read_values(t, n);
	print_array_to_console(t, n);
}

*/