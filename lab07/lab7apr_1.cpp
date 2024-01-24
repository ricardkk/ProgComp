#include <iostream>
using namespace std;

char codifica(char ch) {
	return ch + 3;
}

char decodifica(char ch) {
	return ch - 3;
}

int main() {
	char ch;

	cout << "Digite um caractere: "; cin >> ch;
	cout << codifica(ch);
	cout << decodifica(ch);
}