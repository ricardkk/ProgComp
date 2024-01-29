#include <iostream>
#include "cores.h"
using namespace std;

void ajustaCor(int corTexto, int corFundo) {
	cout << "\033[38;5;" << corTexto << "m";
	cout << "\033[48;5;" << corFundo << "m";
}

void resetaCor() {
	cout << "\033[0m";
}