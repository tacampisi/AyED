#include <iostream>

using namespace std;

double calcularPi() {
    double pi = 0.0;
    double denominador = 1.0;
    int signo = 1;
    double roundup = 0.000001; // Precisión de 6 decimales

    while (true) {
        double termino = signo * (1.0 / denominador);
        pi += termino; // Se van sumando valores a pi
        signo *= -1; // Alternación de signo
        denominador += 2; // Se suma 2 al denominador, para mantenerlo impar

        if (abs(termino) < roundup) {
            return 4 * pi; // La serie de leibniz da como resultado pi/4; se multplica por 4 para obtener pi
        }
    }
}

int main() {
    double pi = calcularPi();
    cout.precision(7);
    cout << "Valor aproximado de Pi: " << pi << endl;

    return 0;
}