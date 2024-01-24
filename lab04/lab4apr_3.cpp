#include <iostream>
using namespace std;

float media(int x, int y) {
	return (x + y) / 2.0;
}

int main() {
	int x, y;
	float result;
	cout << "Digite um valor inteiro: "; cin >> x;
	cout << "Digite outro valor inteiro: "; cin >> y;

	result = media(x, y);
	cout << "A média é: " << result;
}