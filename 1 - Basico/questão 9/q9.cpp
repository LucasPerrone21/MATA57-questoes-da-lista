#include <iostream>
using namespace std;

int main(){
    int tamanhoEstrada, distanciaPedagio, valorPorKm, valorPorPedagio;
    cin >> tamanhoEstrada >> distanciaPedagio >> valorPorKm >> valorPorPedagio;

    int numeroPedagios = tamanhoEstrada / distanciaPedagio;
    int custoTotal = (tamanhoEstrada * valorPorKm) + (numeroPedagios * valorPorPedagio);

    cout << custoTotal << endl;
    return 0;
}