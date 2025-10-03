#include <iostream>
using namespace std;

int main(){
    int qtd;
    int xp = 0;
    int newxp;

    cin >> qtd;

    for (int i = 0; i < qtd; i++)
    {
        cin >> newxp;

        if (newxp > xp){
            xp = newxp;
        }

    }

    cout << xp << endl;
    return 0;
    
}