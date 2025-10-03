#include <iostream>
using namespace std;

int main(){
    int numero, contador = 1, contadorAux = 1;
    cin >> numero;

    while (contador+1 < numero){
        contador += contadorAux +1;
        contadorAux++;

    }

    if (numero == contador || numero == 2)
    {
        cout << numero << " eh perfeito" << endl;
        return 0; 
    }
    cout << numero << " nao eh perfeito" << endl;
    return 0;

    
}