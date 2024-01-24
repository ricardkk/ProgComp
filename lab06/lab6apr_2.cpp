#include <iostream>
using namespace std;

#define PAO 0.30
#define PASTEL 0.25

int main() {
	int qntPao, qntPastel;
	cout << "Pães&Cia";
	cout << endl;

	cout << "Quantos pães? "; cin >> qntPao;
	cout << "Quantos pastéis? "; cin >> qntPastel;
	float total = (qntPao * PAO) + (qntPastel * PASTEL);

	cout << "O total das compras é R$" << total;
}