#include <iostream>
using namespace std;

bool testarBit(unsigned char num, int posicao) {
    if (num & (1 << posicao)) {
        return 1;
    }
    else { return 0; }
}

int main() {
    int entrada;
    unsigned char num;
    cout << "Digite um valor entre 0 e 255: "; cin >> entrada;
    cout << endl;
    num = entrada;

    cout << "O número " << entrada << " em binário é ";
    cout << testarBit(num, 0);
    cout << testarBit(num, 1);
    cout << testarBit(num, 2);
    cout << testarBit(num, 3);
    cout << testarBit(num, 4);
    cout << testarBit(num, 5);
    cout << testarBit(num, 6);
    cout << testarBit(num, 7);
}