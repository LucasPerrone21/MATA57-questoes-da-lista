#include <iostream>
#include <string>
using namespace std;

int main() {
    struct moeda
    {
        string cor;
        int valor;
    };

    int qtd_moedas;
    cin >> qtd_moedas;

    moeda lista_moedas[qtd_moedas];
    for (int i = 0; i < qtd_moedas; i++)
    {
        cin >> lista_moedas[i].cor >> lista_moedas[i].valor;
    }

    int valor_minimo, soma = 0;
    cin >> valor_minimo;

    for(int i = 0; i < qtd_moedas; i++) {
        if (lista_moedas[i].valor >= valor_minimo)
        {
            cout << lista_moedas[i].cor << " " << lista_moedas[i].valor << endl;
            soma += lista_moedas[i].valor;
        }
    }

    cout << soma << endl;


    

}