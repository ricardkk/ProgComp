#include <iostream>
#include <cmath>
using namespace std;

double calcComprimento(int x, int y) {
	double tamanho = sqrt(pow(x, 2) + pow(y, 2));
	return tamanho;
}

int main() {
	int x, y;
	
	cout << "Digite as coordenadas do vetor: " << endl;
	cout << "x: "; cin >> x;
	cout << "y: "; cin >> y;


	cout << "O tamanho do vetor é: " << calcComprimento(x, y);
}