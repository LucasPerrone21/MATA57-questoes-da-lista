#include <iostream>
using namespace std;

int main(){
    int quantidadeMissoes, experiencia, yoda, luke, ahsoka;
    cin >> quantidadeMissoes >> experiencia >> yoda >> luke >> ahsoka;

    yoda += quantidadeMissoes * experiencia;
    luke += quantidadeMissoes * experiencia;
    ahsoka += quantidadeMissoes * experiencia;

    cout << "Yoda " << yoda << endl;
    cout << "Luke " << luke << endl;
    cout << "Ahsoka " << ahsoka << endl;

    return 0;
}