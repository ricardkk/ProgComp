// versão 2
#include <iostream>
using namespace std;
void alarmeInicial();
void lerSenha();
void alarmeFinal();

int main()
{
	alarmeInicial();
	lerSenha();
	alarmeFinal();
}
void alarmeInicial()
{
	cout << "Iniciando...\n";
	cout << '\a';
}
void lerSenha()
{
	cout << "Senha: ";
	int senha;
	cin >> senha;
}
void alarmeFinal()
{
	cout << "Finalizando...\n";
	cout << '\a';
}