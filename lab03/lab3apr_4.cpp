#include <iostream> 
using namespace std;
int main() {
	float custofabrica, porcdistribuidor, porcimpostos, custoconsumidor;
	cout << "Custo de f�brica: "; cin >> custofabrica;

	porcdistribuidor = custofabrica * 0.28;
	porcimpostos = custofabrica * 0.45;
	custoconsumidor = custofabrica + porcdistribuidor + porcimpostos;

	cout << "O custo ao consumidor � de R$" << custoconsumidor;
}