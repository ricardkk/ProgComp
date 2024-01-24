#include <iostream>
using namespace std;
int main() {
	float peso, corrida, ciclismo, natacao, calorias;
	char separadorh, separadorm;
	int horaCorrida, minutoCorrida, horaCiclismo, minutoCiclismo, horaNatacao, minutoNatacao;

	cout << "Digite o seu peso em quilos: "; cin >> peso;
	cout << "Digite seu tempo de corrida: "; cin >> horaCorrida >> separadorh >> minutoCorrida >> separadorm;
	cout << "Digite seu tempo de ciclismo: "; cin >> horaCiclismo >> separadorh >> minutoCiclismo >> separadorm;
	cout << "Digite seu tempo de natacao: "; cin >> horaNatacao >> separadorh >> minutoNatacao >> separadorm;

	corrida = ((horaCorrida * 60) + minutoCorrida) / 60;
	ciclismo = ((horaCiclismo * 60) + minutoCiclismo) / 60;
	natacao = ((horaNatacao * 60) + minutoNatacao) / 60;

	calorias = (7 * peso * corrida) + (7 * peso * ciclismo) + (8 * peso * natacao);

	cout << "Você gastou um total de " << calorias << " calorias.";
}