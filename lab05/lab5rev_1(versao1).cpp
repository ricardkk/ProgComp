// versão 1
#include <iostream>
using namespace std;
void alarme();
int lerSenha();
int main()
{
	cout << "Iniciando...\n";
	alarme();
	cout << "Senha: ";
	int senha = lerSenha();
	cout << "Finalizando...\n";
	alarme();
}
void alarme()
{
	cout << '\a';
}
int lerSenha()
{
	int n;
	cin >> n;
	return n;
}