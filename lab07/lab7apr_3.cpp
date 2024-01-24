#include <iostream>
using namespace std;


int bitsBaixos(int num) {
    int mascara = 65535; 
    int bitsBaixos = num & mascara;
    return bitsBaixos;
}

int main() {
    int num;
    cout << "Digite um valor inteiro: "; cin >> num;
    cout << "Os 16 bits mais baixos desse valor correspondem ao número " << bitsBaixos(num) << ".";

}
