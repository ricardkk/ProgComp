#include <iostream>
using namespace std;
int main() {
	int anos, cigdia;
	float preco, total;

	cout << "A quantos anos você fuma? "; cin >> anos;
	cout << "Quantos cigarros por dia? "; cin >> cigdia;
	cout << "Qual o preço médio de uma carteira de cigarros? "; cin >> preco;
	
	total = ((anos*365) * cigdia) * (preco/20);
	cout << "Você já gastou até agora R$" << total << " com cigarros.";
}