#include <iostream>

using namespace std;
int n;
int* t;

void reverse() {
	int i = 0;
	int temp;
	int x = n;
	x--;
	while (x > i) {
		temp = t[i];
		t[i] = t[x];
		t[x] = temp;
		x--;
		i++;
	}
}

void allocate_array() {
	t = new int[n];
}

void read_values() {
	for (int i = 0; i < n; i++) {
		cout << "Anna arvo: ";
		cin >> t[i];
	}
}

void print_array_to_console() {
	for (int i = 0; i < n; i++) {
		cout << t[i] << " ";
	}
	cout << "\n";
}

int main() {
	cout << "Anna taulukon koko: ";
	cin >> n;

	allocate_array();
	read_values();
	print_array_to_console();
	reverse();
	print_array_to_console();
	delete t;
	return 1;
}