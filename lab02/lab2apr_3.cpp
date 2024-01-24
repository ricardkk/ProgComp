#include <iostream>
using namespace std;
int main()
{
	cout << left; cout.width(10); cout << "Produto";
	cout << right; cout.width(6); cout << "Preço/Kg";
	cout.width(15); cout << "Pedido(Kg)";
	cout.width(20); cout << "Total parcial" << endl;

	cout << left; cout.width(10); cout << "-------";
	cout << right; cout.width(6); cout << "-------";
	cout.width(15); cout << "---------" ;
	cout.width(20); cout << "----------" << endl;

	cout << left; cout.width(10); cout << "Alface";
	cout << right; cout.width(6); cout << "R$ 1,25/Kg";
	cout.width(10); cout << "3,2Kg";
	cout.width(20); cout << "R$ 4,00" << endl;

	cout << left; cout.width(10); cout << "Beterraba";
	cout << right; cout.width(6); cout << "R$ 0,65/Kg";
	cout.width(10); cout << "6,0Kg";
	cout.width(20); cout << "R$ 3,90" << endl;

	cout << left; cout.width(10); cout << "Cenoura";
	cout << right; cout.width(6); cout << "R$ 0,90/Kg";
	cout.width(10); cout << "10Kg";
	cout.width(20); cout << "R$ 9,00" << endl;

	
	return 0;
}