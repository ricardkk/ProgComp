#include <iostream>
using namespace std;

int main() {
	int distancia, litrosGasolina, consumo;
	cout << "Dist�ncia percorrida (km): "; cin >> distancia;
	cout << "Litros de combust�vel: "; cin >> litrosGasolina;
	consumo = distancia / litrosGasolina;

	cout << "O consumo do seu carro foi de " << consumo << " km/litro.";
}

/*Se o resultado do consumo n�o for uma divis�o exata o programa ir� arredondar o resultado,
desse modo, usar os valores em ponto flutuante forneceria uma sa�da mais precisa.*/
