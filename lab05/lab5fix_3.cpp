#include <iostream>
using namespace std;

void mediaHarmonica(double x, double y) {
	double harmonica = (2 * x * y) / (x + y);
	cout << "A m�dia harm�nica dos n�meros � " << harmonica;
}

int main() {
	double x, y;
	cout << "Entre com um n�mero: "; cin >> x;
	cout << "Entre com outro n�mero: "; cin >> y;

	mediaHarmonica(x, y);
}