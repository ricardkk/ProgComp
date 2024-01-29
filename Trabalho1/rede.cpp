#include "pacote.h"
#include "rede.h"
#include <iostream>
using namespace std;

unsigned int rede;
void transmitir(unsigned int passo, unsigned int cor, unsigned int pos, unsigned int vel, unsigned int oleo) {
	rede = empacotar(passo, cor, pos, vel, oleo);
}

unsigned int receber() {
	cout << passoPacote(rede);
	cout << posicaoPacote(rede);
	cout << velocidadePacote(rede);
	cout << oleoPacote(rede);

	return rede;
}

unsigned int processar(unsigned int rede) {
	int proximaPosicao = posicaoPacote(rede) + velocidadePacote(rede) - oleoPacote(rede);
	return proximaPosicao;
}