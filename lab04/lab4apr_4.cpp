#include <iostream>
#include <cmath>
using namespace std;

float VolumeCilindro(float pi, float raio, float altura) {
	return pi * pow(raio, 2) * altura;
}

int main() {
	float raio, altura, pi, volume;
	pi = 3.14159;
	cout << "Calcula o Volume de um Cilindro\n-------------------------------\n";
	cout << "Entre com o raio: "; cin >> raio;
	cout << "Entre com a altura: "; cin >> altura;

	volume = VolumeCilindro(pi,raio,altura);
	cout << "O volume do cilindro é: " << volume;
}