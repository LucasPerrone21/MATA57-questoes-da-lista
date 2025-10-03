#include <iostream>

using namespace std;

int main(){
    int qtd, heroType;
    bool hasTank = false, hasSup = false;

    cin >> qtd;

    for (int i = 0; i < qtd; i++)
    {
        cin >> heroType;

        if (heroType == 1)
        {
            hasTank = true;
        } else if (heroType == 2){
            hasSup = true;
        }
        
    }

    if ((hasTank) && (hasSup))
    {
        cout << "Equipe Balanceada" << endl;
        return 0;
    }
    cout << "Equipe Desbalanceada" << endl;
    return 0;
}