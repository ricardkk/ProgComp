#include <iostream>
using namespace std;
int main() {
	int horas, minutos;
	char separador;

	cout << "Que horas são? "; cin >> horas >> separador >> minutos;

	cout << "O seu relógio está atrasado." << endl << "Agora são " << (horas + 1) << separador << minutos;
}