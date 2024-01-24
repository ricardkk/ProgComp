#include <iostream>
using namespace std;

int main() {
	char separador;
	short horaPartida, minutoPartida, horaChegada, minutoChegada, horaResultado, minutoResultado;
	cout << "Digite o horário de partida (HH:MM): "; cin >> horaPartida >> separador >> minutoPartida;
	cout << "Digite o horário de chegada (HH:MM): "; cin >> horaChegada >> separador >> minutoChegada;

	horaResultado = horaChegada - horaPartida;
	minutoResultado = minutoChegada - minutoPartida;

	if (minutoResultado < 0) {
		minutoResultado += 60;
		horaResultado--;
	}

	cout << "O tempo total de viagem foi " << horaResultado << " horas e " << minutoResultado << " minutos.";
} 