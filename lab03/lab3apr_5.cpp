#include <iostream>
using namespace std;
int main() {
	int horas, minutos;
	char separador;

	cout << "Que horas s�o? "; cin >> horas >> separador >> minutos;

	cout << "O seu rel�gio est� atrasado." << endl << "Agora s�o " << (horas + 1) << separador << minutos;
}