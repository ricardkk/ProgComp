#include <iostream>
#include <cmath>
using namespace std;

double imc(double altura, double massa) {
	return massa / pow(altura, 2);
}

int main() {
	double altura, massa,indiceMassaCorporal;

	cout << "Índice de Massa Corporal (IMC)" << endl << "------------------------" << endl;
	cout << "Altura: "; cin >> altura;
	cout << "Massa: "; cin >> massa;

	indiceMassaCorporal = imc(altura,massa);
	cout << "IMC: " << indiceMassaCorporal;
}