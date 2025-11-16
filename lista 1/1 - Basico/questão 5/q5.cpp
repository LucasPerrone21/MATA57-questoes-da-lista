#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int nInscricao , nota1, nota2, nota3, nota4, nota5;

    cin >> nInscricao;
    cin >> nota1 >> nota2 >> nota3 >> nota4 >> nota5;

    float media = (nota1 + nota2 + nota3 + nota4 + nota5) / 5.0;

    cout << nInscricao << " " << fixed << setprecision(1) << media << endl;

    return 0;
}
