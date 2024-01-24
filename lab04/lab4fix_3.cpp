#include <iostream>
using namespace std;


void Dois() {
	cout << "Dois ";
}

void UmTres() {
	cout << "Um ";
	Dois();
	cout << "Três ";
}

int main() {
	cout << "Começando agora: " << endl;
	UmTres(); cout << endl;
	cout << "Pronto!";
}