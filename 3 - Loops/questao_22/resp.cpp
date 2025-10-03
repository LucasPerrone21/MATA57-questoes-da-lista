#include <iostream>
using namespace std;

int main(){
    int qtdLeituras, capacidade, saida = 0, entrada = 0, qtdAtual = 0;
    bool ultrapassou = false;

    cin >> qtdLeituras >> capacidade;

    for (int i = 0; i < qtdLeituras; i++)
    {
        cin >> saida >> entrada;
        qtdAtual -= saida;
        qtdAtual += entrada;

        if(qtdAtual > capacidade){

            
            ultrapassou = true;
        }
    }

    if(ultrapassou){
        cout << "S" << endl;
        return 0;
    }
    cout << "N" << endl;
    return 0;

    
}