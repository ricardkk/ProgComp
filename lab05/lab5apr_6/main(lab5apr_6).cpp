#include <iostream>
#include <cmath>
#include "funcoes(lab5apr_6).h"
using namespace std;

int main() {
	int x, y;

	cout << "Digite as coordenadas do vetor: " << endl;
	cout << "x: "; cin >> x;
	cout << "y: "; cin >> y;

	cout << "Coordenadas polares do vetor: " << endl;
	cout << "(" << calcComprimento(x, y) << ", " << calcAngulo(x, y) << ")";
}