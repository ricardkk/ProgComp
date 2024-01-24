#include <iostream>
using namespace std;


int bitsAltos(int num) {
    int mascara = 65535 << 16;
    int bitsAltos = (num & mascara) >> 16;
    return bitsAltos;
}

int main() {
    int num;
    cout << "Digite um valor inteiro: "; cin >> num;
    cout << "Os 16 bits mais altos desse valor correspondem ao número " << bitsAltos(num) << ".";

}
