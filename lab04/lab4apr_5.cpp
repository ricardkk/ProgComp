#include <iostream>
#include <cmath>
using namespace std;

int Absoluto(int num) {
	return sqrt(pow(num,2));
}
int main() {
	int num;
	cout << "Digite um número inteiro: "; cin >> num;

	num = Absoluto(num);

	cout << "O valor absoluto é " << num;
}