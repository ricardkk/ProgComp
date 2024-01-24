#include <iostream>
using namespace std;

char codifica(char ch) {
	return ch + 3;
}

char decodifica(char ch) {
	return ch - 3;
}

int main() {
	char ch, resposta;

	cout << "Digite um caractere: "; cin >> ch;
	cout << "Digite 1 para codificar ou 0 para decodificar. "; cin >> resposta;

	if (resposta == true)
	{
		cout << codifica(ch);
	}
	else
	{
		cout << decodifica(ch);
	}


}