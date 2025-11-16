#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main(){
    int qtdEspecies;
    int qtdBuscas;

    cin >> qtdEspecies;
    vector<string> especies;

    for(int c = 0 ; c < qtdEspecies ; c++){
        string sua_mae;
        cin >> sua_mae;
        especies.push_back(sua_mae);
    }

    cin >> qtdBuscas;

    for(int c = 0 ; c < qtdBuscas ; c++){
        string animal;
        cin >> animal;
        if(binary_search(especies.begin(),especies.end(),animal)){
            cout << animal << " vive!" << endl;
            continue;
        }
        cout << animal << " foi extinto :(" << endl;

    }

    


}

