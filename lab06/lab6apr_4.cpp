#include <iostream>
using namespace std;
long long calculo(long long, long long);
int main()
{
	long long resultado = 200530LL * 420800LL;
	cout << "Direto: " << resultado << endl;
	cout << "Função: " << calculo(200530, 420800) << endl;
	return 0;
}
long long calculo(long long a, long long b)
{
	return a * b;
}

/*Dentro da função os números são declarados como long long, o que não acontece na main
o que faça com que não haja garantia que esses números sejam de fato tratados como long long,
para corrigir isso é necessário adicionar 'LL' no final dos números para garantir que sejam
interpretados como long long.*/