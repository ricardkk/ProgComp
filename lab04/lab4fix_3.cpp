#include <iostream>
using namespace std;


void Dois() {
	cout << "Dois ";
}

void UmTres() {
	cout << "Um ";
	Dois();
	cout << "Tr�s ";
}

int main() {
	cout << "Come�ando agora: " << endl;
	UmTres(); cout << endl;
	cout << "Pronto!";
}