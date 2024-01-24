#include <iostream>
using namespace std;

unsigned char ligarBit(unsigned char num, int posicao) {
    return num | (1 << posicao);
}

unsigned char desligarBit(unsigned char num, int posicao) {
    return num & ~(1 << posicao);
}


bool testarBit(unsigned char num, int posicao) {
    if (num & (1 << posicao)) { 
        return 1;
    }
    else { return 0; }
}


int main() {
    unsigned char num;
    

    cout << "Digite um número: "; cin >> num;
    cout << (int)ligarBit(num, 3) << endl;
    cout << (int)desligarBit(num, 5) << endl;
    if (testarBit(num, 0) == 1) {
        cout << "Ligado";
    }
    else {
        cout << "Desligado";
    }

}