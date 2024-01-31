#include "pacote.h"
#include "rede.h"
#include "cores.h"
#include <iostream>
using namespace std;

unsigned int rede;
void transmitir(unsigned int passo, unsigned int cor, unsigned int pos, unsigned int vel, unsigned int oleo) {
	rede = empacotar(passo, cor, pos, vel, oleo);
	cout << "\nTransmitindo dados..." << endl;
	ajustaCor(0, corPacote(rede)); cout << rede << endl; resetaCor();

}

unsigned int receber() {
	cout << "Recebendo dados..." << endl;
	ajustaCor(corPacote(rede)); cout << "Passo "; ajustaCor(0, corPacote(rede)); cout << passoPacote(rede);
	ajustaCor(corPacote(rede)); cout << " Pos "; ajustaCor(0, corPacote(rede)); cout << posicaoPacote(rede);
	ajustaCor(corPacote(rede)); cout << " Vel "; ajustaCor(0, corPacote(rede)); cout << velocidadePacote(rede);
	ajustaCor(corPacote(rede)); cout << " Oil "; ajustaCor(0, corPacote(rede)); if (oleoPacote(rede)) { cout << "true"; } else { cout << "false"; };
	resetaCor();

	return rede;
}

unsigned int processar(unsigned int rede) {
	int proximaPosicao = posicaoPacote(rede) + velocidadePacote(rede) - oleoPacote(rede);
	cout << "\nProcessando dados..." << endl;
	ajustaCor(corPacote(rede)); cout << "Próxima posição: " << proximaPosicao; 
	resetaCor();
	return proximaPosicao;
}