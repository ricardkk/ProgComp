#include <iostream>
using namespace std;

#define PAO 0.30
#define PASTEL 0.25

int main() {
	int qntPao, qntPastel;
	cout << "P�es&Cia";
	cout << endl;

	cout << "Quantos p�es? "; cin >> qntPao;
	cout << "Quantos past�is? "; cin >> qntPastel;
	float total = (qntPao * PAO) + (qntPastel * PASTEL);

	cout << "O total das compras � R$" << total;
}