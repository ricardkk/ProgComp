#include <iostream>
using namespace std;
int main() {
	float ladoa, ladob, altura, areabase, volume;

	cout << "Lado a: "; cin >> ladoa;
	cout << "Lado b: "; cin >> ladob;
	
	areabase = ladoa * ladob;
	cout << "Área da base = " << areabase << endl;

	cout << "Altura: "; cin >> altura;
	volume = ladoa * ladob * altura;

	cout << "Volume do prisma = " << volume;
}

