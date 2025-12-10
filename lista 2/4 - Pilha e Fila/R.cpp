#include <iostream>
#include <string>
using namespace std;

int main() {
    struct pessoa
    {
        string nome;
        int peso;
    };

    int qtd_pessoas;
    cin >> qtd_pessoas;


    pessoa lista_pessoas[qtd_pessoas];

    for (int i = 0; i < qtd_pessoas; i++)
    {
        cin >> lista_pessoas[i].nome >> lista_pessoas[i].peso;
    }

    int limite_peso;
    cin >> limite_peso;

    int soma_peso = 0;
    
    for (int i = 0; i < qtd_pessoas; i++)
    {
        soma_peso += lista_pessoas[i].peso;
    }

    if (soma_peso <= limite_peso)
    {
        cout << "Vamos todos encontrar a montanha!" << endl;
    }
    else
    {
        cout << "Vamos virar almoço de aranhas gigantes!" << endl;
    }
    
}