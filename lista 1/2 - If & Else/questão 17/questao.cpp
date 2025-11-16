#include <iostream>
using namespace std;

int main(){
    char direcaoAtacante, direcaoZagueiro, direcaoChute, direcaoGoleiro;

    cin >> direcaoZagueiro >> direcaoGoleiro >> direcaoAtacante >> direcaoChute;

    if (direcaoAtacante != direcaoZagueiro){
        cout << "Bloqueado" << endl;
        return 0;
    }

    cout << "Driblado" << endl;

    if (direcaoChute != direcaoGoleiro){
        cout << "...e o goleiro pega" << endl;
        return 0;
    }

    cout << "Gol" << endl;

    return 0;
}