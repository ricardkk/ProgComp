#include <iostream>
#include "cores.h"
#include "pacote.h"
#include "rede.h"
#include <ctime>
using namespace std;


void limpaTela() {
	system("cls");
}

void WhiteSpace(int qtd) { 
	while (qtd-- > 0) cout << ' '; 
}


void desenhaCaminhao(int posicao,int cor) {
	ajustaCor(cor);
	cout << "\n"; WhiteSpace(posicao); cout << "\xDB\xDB\xDB\xDB\xDB\xDB \xDB\xDB\xDC";
	cout << "\n"; WhiteSpace(posicao); cout << "\xDF\xDFOO\xDF\xDF\xDF\xDFO\xDF"; 
	cout << "\n------------------------------------------------------------------------------------------|--------------------\n"; 
	cout << "                                                                                         100";
	resetaCor();
}

int main()
{
	int posicao, velocidade, cor;
	bool estadoPista;

	int passo = 0;
	do
	{
		// ------------------
		// Limpa tela
		// Desenha caminhões
		// ------------------
		limpaTela();
		desenhaCaminhao(posicao, cor);

			// ------------------------
			// Atualiza velocidade
			// Atualiza estado da pista
			// ------------------------
		srand(unsigned(time(NULL)));
		velocidade = rand() % 10 + 1;
			// ----------------------------------
			// Transmite, recebe e processa dados
			// Calcula Próxima posição
			// ----------------------------------
		transmitir(passo,cor,posicao,velocidade,estadoPista);
		receber();
		processar(receber());

			// -------------------------------
			// Aguarda pressionamento de tecla
			// -------------------------------

			passo = passo + 1;
	} while (posA <= 100 && posB <= 100);
	// --------------------
	// Limpa tela
	// Desenha caminhões
	// Exibe resultados
	// --------------------
	
	 
	
	
	
}


