#include <iostream>
using namespace std;
int main() {
	float altura, largura, comprimento, volume;
	cout << "Entre com a altura, largura e comprimento:" << endl;
	cin >> altura >> largura >> comprimento;

	volume = altura * largura * comprimento;

	cout << "O volume � " << volume << " cm c�bicos.";
}