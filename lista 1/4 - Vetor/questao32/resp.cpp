#include <iostream>
using namespace std;

int main() {
    int qtdPlacas, placasLembradas;
    cin >> qtdPlacas >> placasLembradas;
    
    int placas[qtdPlacas];
    int arrayPlacasLembradas[placasLembradas];
    
    for (int i = 0; i < qtdPlacas; i++) {
        cin >> placas[i];
    }
    
    int contador = 0;
    for (int i = qtdPlacas - 1; i >= 0 && contador < placasLembradas; i--) {
        if (placas[i] != 0) {
            arrayPlacasLembradas[contador] = placas[i];
            contador++;
        }
    }

    for (int i = contador - 1; i >= 0; i--) {
        cout << arrayPlacasLembradas[i] << " ";
    }
    cout << endl;

    return 0;
}
