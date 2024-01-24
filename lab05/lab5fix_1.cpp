#include <iostream>
using namespace std;

void exibeHora(int horas, int minutos) {
	cout << "Agora são " << horas << ":" << minutos;
}
int main() {	int horas;
	int minutos;	cout << "Entre com o número de horas: "; cin >> horas;	cout << "Entre com o número de minutos: "; cin >> minutos;	exibeHora(horas, minutos);}