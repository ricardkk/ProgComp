#include <iostream>
using namespace std;

void exibeHora(int horas, int minutos) {
	cout << "Agora s�o " << horas << ":" << minutos;
}
int main() {	int horas;
	int minutos;	cout << "Entre com o n�mero de horas: "; cin >> horas;	cout << "Entre com o n�mero de minutos: "; cin >> minutos;	exibeHora(horas, minutos);}