#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	int num;
	srand(time(NULL));
	num = rand();

	cout << "Gerando n�mero pseudoaleat�rio: " << endl;
	cout << num << endl;
	if (num > 16834) {
		cout << "GRANDE";
	}
	else {
		cout << "PEQUENO";
	}
	
}