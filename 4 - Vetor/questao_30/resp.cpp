#include <iostream>
using namespace std;

int main(){
    int qtdEsferas;
    cin >> qtdEsferas;
    int esferas[qtdEsferas];
    
    for(int i = 0 ; i < qtdEsferas ; i++){
        cin >> esferas[i];
    }
    
    // Vetor para marcar se já temos a esfera de 1 a 7
    bool temEsfera[7] = {false};
    
    for(int i = 0 ; i < qtdEsferas ; i++){
        if(esferas[i] >= 1 && esferas[i] <= 7){
            temEsfera[esferas[i] - 1] = true;
        }
    }
    
    int contagem = 0;
    for(int i = 0; i < 7; i++){
        if(temEsfera[i]){
            cout << i + 1 << " ";
            contagem++;
        }
    }
    cout << endl;
    
    if(contagem < 7){
        cout << "Nao encontramos todas" << endl;
    } else {
        cout << "Saia Shenlong e realize o meu desejo" << endl;
    }

    return 0;
}


