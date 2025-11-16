#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int qtdJogadores;
    cin >> qtdJogadores;

    vector<int> jogadores;

    for(int c = 0 ; c < qtdJogadores ; c++){
        int jogador;
        cin >> jogador;
        jogadores.push_back(jogador);
    }

    sort(jogadores.begin() , jogadores.end());
    for (int c = 0 ; c < 8 ; c++){
        cout << jogadores[c] << " ";
    }
    cout << endl;

}

