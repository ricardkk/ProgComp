#include <iostream>
using namespace std;

char charada(char ch, int x) {
	return ch + x;
}

int main() {
	cout << charada(60, 20);
	cout << charada(7, 90);
	cout << charada(40, 72);
	cout << charada(53, 48);
	cout << charada(1, 107);
}