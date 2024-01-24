#include <iostream>
using namespace std;

bool isShort(long long);
bool isInt(long long);

int main() {
	long long num;
	cout << "Digite um valor inteiro: "; cin >> num;

	if (isShort(num) == true) {
		cout << num << " cabe em 16 bits";
	} else { 
		cout << num << " não cabe em 16 bits";
	}

	cout << endl;

	if (isInt(num) == true) {
		cout << num << " cabe em 32 bits";
	}
	else {
		cout << num << " não cabe em 32 bits";
	}
}

bool isShort(long long num) {
	if (num <= SHRT_MAX && num >= SHRT_MIN) {
		return true;
	}
	else { return false;}
}

bool isInt(long long num) {
	if (num <= INT_MAX && num >= INT_MIN) {
		return true;
	}
	else { return false; }
}


