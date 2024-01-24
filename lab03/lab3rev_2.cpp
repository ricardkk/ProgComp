#include <iostream>
using namespace std;
int main() {
	int horas, minutos;
	char separador;
	cout << "Que horas são? ";
	cin >> horas >> separador >> minutos;
	cout << horas << " Horas" << endl << minutos << " Minutos";
}