#include <iostream>

using namespace std;

int main(){
    int qtdInimigos;
    int qtdNarutos = 1;

    cin >> qtdInimigos;

    while (qtdNarutos <= qtdInimigos)
    {
        if (qtdNarutos == qtdInimigos){
            cout << "Dattebayo" << endl;
            return 0;
        }

        qtdNarutos = qtdNarutos * 2;
    }



    cout << "Tururuuu" << endl;
    return 0;
    
    

}