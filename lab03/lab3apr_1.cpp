#include <iostream>
using namespace std;
int main() {
	int anos, cigdia;
	float preco, total;

	cout << "A quantos anos voc� fuma? "; cin >> anos;
	cout << "Quantos cigarros por dia? "; cin >> cigdia;
	cout << "Qual o pre�o m�dio de uma carteira de cigarros? "; cin >> preco;
	
	total = ((anos*365) * cigdia) * (preco/20);
	cout << "Voc� j� gastou at� agora R$" << total << " com cigarros.";
}