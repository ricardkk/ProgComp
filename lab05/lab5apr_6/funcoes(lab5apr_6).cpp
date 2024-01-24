#include <cmath>
#include "funcoes(lab5apr_6).h"

double calcComprimento(int x, int y) {
    double tamanho = sqrt(pow(x, 2) + pow(y, 2));
    return tamanho;
}

double calcAngulo(int x, int y) {
    double anguloTeta = atan2(y, x);
    anguloTeta = (anguloTeta * 180) / 3.14;
    return anguloTeta;
}