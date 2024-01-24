#include <iostream>
using namespace std;

int main() {
	int distancia, litrosGasolina, consumo;
	cout << "Distância percorrida (km): "; cin >> distancia;
	cout << "Litros de combustível: "; cin >> litrosGasolina;
	consumo = distancia / litrosGasolina;

	cout << "O consumo do seu carro foi de " << consumo << " km/litro.";
}

/*Se o resultado do consumo não for uma divisão exata o programa irá arredondar o resultado,
desse modo, usar os valores em ponto flutuante forneceria uma saída mais precisa.*/
