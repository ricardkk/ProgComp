#include <iostream>
using namespace std;
long long calculo(long long, long long);
int main()
{
	long long resultado = 200530LL * 420800LL;
	cout << "Direto: " << resultado << endl;
	cout << "Fun��o: " << calculo(200530, 420800) << endl;
	return 0;
}
long long calculo(long long a, long long b)
{
	return a * b;
}

/*Dentro da fun��o os n�meros s�o declarados como long long, o que n�o acontece na main
o que fa�a com que n�o haja garantia que esses n�meros sejam de fato tratados como long long,
para corrigir isso � necess�rio adicionar 'LL' no final dos n�meros para garantir que sejam
interpretados como long long.*/