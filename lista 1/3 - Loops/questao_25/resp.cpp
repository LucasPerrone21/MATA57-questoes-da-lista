#include <iostream>
using namespace std;

int main(){
    int qtdJogadores, qtdSoldados;

    cin >> qtdJogadores >> qtdSoldados;

    for(int i = 0; i < qtdJogadores; i++){
        int ataqueTotal = 0, defesaTotal = 0;
        for (int c = 0; c < qtdSoldados; c++)
        {
            int ataque, defesa;
            cin >> ataque >> defesa;
            ataqueTotal+= ataque;
            defesaTotal += defesa;
        }

        cout << ataqueTotal << " " << defesaTotal << endl;
        
    }
    return 0;
}