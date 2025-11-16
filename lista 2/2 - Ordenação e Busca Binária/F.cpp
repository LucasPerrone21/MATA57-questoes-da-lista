#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int qtdFadas;
    cin >> qtdFadas;

    vector<string> fadas;

    for(int c = 0 ; c < qtdFadas ; c++){
        string fada;
        cin >> fada;
        fadas.push_back(fada);
    }

    sort(fadas.begin() , fadas.end());
    for (string fada : fadas){
        cout << fada << endl;
    }
}

