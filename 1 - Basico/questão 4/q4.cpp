#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double prova1,prova2,prova3;
    cin >> prova1 >> prova2 >> prova3;
    double media = ((prova1 * 4) + (prova2 * 4) + (prova3 * 2)) / 10;
    cout << fixed << setprecision(2) << media << endl;
    return 0;
}