#include <iostream>
using namespace std;

double aumentaSalario(double salario) {
	return salario + (salario * 0.15);
}

int main() {
	double salario,ajusteSalario;

	cout << "Sal�rio atual: R$ "; cin >> salario;
	ajusteSalario = aumentaSalario(salario);
	cout << "Sal�rio ajustado para R$ " << ajusteSalario;
}