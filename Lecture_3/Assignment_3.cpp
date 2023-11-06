/*
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

void print_array_to_console(int* t, int n) {
	for (int i = 0; i < n; i++) {
		cout << t[i];
	}
}

int main() {
	int t[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	reverse(t, 9);

	print_array_to_console(t, 9);
	return 1;
}
*/