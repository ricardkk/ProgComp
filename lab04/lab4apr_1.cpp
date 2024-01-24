#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int px, py, qx, qy;
	float distancia;

	cout << "Ponto P: " << endl; cin >> px >> py;
	cout << "Ponto Q: " << endl; cin >> qx >> qy;

	distancia = sqrt(pow(qx - px, 2) + pow(qy - py, 2));

	cout << "A distância entre P e Q é: " << distancia;
}
