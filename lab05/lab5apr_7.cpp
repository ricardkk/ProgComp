#include <iostream>
#include <cmath>
using namespace std;

double elevaQuadrado(double num) {
	return pow(num, 2);
}
double elevaCubo(double num) {
	return pow(num, 3);
}

int main() {
	double num,quadrado,cubo,cuboDoQuadrado;
	cout << "Digite um valor: "; cin >> num;

	quadrado = elevaQuadrado(num); cubo = elevaCubo(num), cuboDoQuadrado = elevaCubo(quadrado);
	cout << "Quadrado: " << quadrado << endl;
	cout << "Cubo: " << cubo << endl;
	cout << "Cubo do quadrado: " << cuboDoQuadrado << endl;
}