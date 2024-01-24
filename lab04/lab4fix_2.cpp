#include <iostream>
using namespace std;

void linha() {
	cout << "----------";
}

void pequena() {
	linha();
}

void media() {
	linha(); linha();
}

void grande() {
	linha(); linha(); linha();
}

int main() {
	pequena(); cout << endl; media(); cout << endl; grande(); cout << endl;
	cout << "Programação de Computadores" << endl;
	grande(); cout << endl; media(); cout << endl; pequena(); 
}