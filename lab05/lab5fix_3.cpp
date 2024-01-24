#include <iostream>
using namespace std;

void mediaHarmonica(double x, double y) {
	double harmonica = (2 * x * y) / (x + y);
	cout << "A média harmônica dos números é " << harmonica;
}

int main() {
	double x, y;
	cout << "Entre com um número: "; cin >> x;
	cout << "Entre com outro número: "; cin >> y;

	mediaHarmonica(x, y);
}