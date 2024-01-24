#include <iostream>
#include <cstdlib>
using namespace std;

void ligar() {
	cout << "- Ligando dispositivos" << endl;
}

void verificar() {
	cout << "- Verificando integridade" << endl;
}

void ativar() {
	cout << "- Ativando processos" << endl;
}


int Inicializar() {
	cout << "Inicializando Sistema: " << endl;
	ligar();
	verificar();
	ativar();
	cout << "Inicialização concluída." << endl;
	

	return rand();
}

int main() {
	int flag;
	
	flag = Inicializar();

	if (flag > 16384) {
		cout << endl << endl << "Sistema em funcionamento.";
	}
	else {
		cout << endl << endl << "Falha na inicialização.";
	}
}
