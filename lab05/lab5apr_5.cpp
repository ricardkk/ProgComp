#include <iostream>
#include <cmath>
using namespace std;

double calcAngulo(int x, int y) {
	double anguloTeta = atan2(y, x);
	anguloTeta = (anguloTeta * 180) / 3.14;
	return anguloTeta;
}

int main() {
	int x, y;
	double resultado;

	cout << "Digite as coordenadas do vetor: " << endl;
	cout << "x: "; cin >> x;
	cout << "y: "; cin >> y;

	resultado = calcAngulo(x, y);
	cout << "O ângulo do vetor é " << resultado << " graus.";
}