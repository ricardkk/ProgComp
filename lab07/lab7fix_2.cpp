#include <iostream>
using namespace std;

void alarme() {
	cout << '\a';
}

int pegaSenha() {
	int senha;
	cin >> senha;
	return senha;
}
int main() {
	int senha;
	
	cout << "Iniciando com um som...\n";
	cout << '\a';
	cout << "Digite sua senha: ______\b\b\b\b\b\b";
	senha = pegaSenha();
	cout << "Obrigado!";
}