#include <iostream>
using namespace std;

double aumentaSalario(double salario) {
	return salario + (salario * 0.15);
}

int main() {
	double salario,ajusteSalario;

	cout << "Salário atual: R$ "; cin >> salario;
	ajusteSalario = aumentaSalario(salario);
	cout << "Salário ajustado para R$ " << ajusteSalario;
}