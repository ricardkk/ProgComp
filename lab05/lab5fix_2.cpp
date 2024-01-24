#include <iostream>
using namespace std;

void conversaoFahrenheit(double celsius) {
	double fahrenheit = 1.8 * celsius + 32;
	cout << celsius << " graus Celsius equivalem a " << fahrenheit << " graus Fahrenheit";
}

int main() {
	double celsius;
	cout << "Digite uma temperatura em graus Celsius: "; cin >> celsius;
	conversaoFahrenheit(celsius);
}

