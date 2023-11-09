
#include <iostream>

using namespace std;

void reverse(int* t, int n) {
	int i = 0;
	int temp;
	n--;
	while (n > i) {
		temp = t[i];
		t[i] = t[n];
		t[n] = temp;
		n--;
		i++;
	}
}

int* allocate_array(int n) {
	int* t = new int[n];
	return t;
}

void read_values(int* t, int n) {
	for (int i = 0; i < n; i++) {
		cout << "Anna arvo: ";
		cin >> t[i];
	}
}

void print_array_to_console(int* t, int n) {
	for (int i = 0; i < n; i++) {
		cout << t[i] << " ";
	}
	cout << "\n";
}

int main() {
	int n;
	cout << "Anna taulukon koko: ";
	cin >> n;

	int* t = allocate_array(n);
	read_values(t, n);
	print_array_to_console(t, n);
	reverse(t, n);
	print_array_to_console(t, n);
	delete[] t;
}
