#include <iostream>
using namespace std;

int main(){
    int aco, madeira, couro;

    cin >> aco >> madeira >> couro;

    aco = aco / 2;
    madeira = madeira / 3;
    couro = couro / 5;

    if ((aco <= madeira) && (aco <= couro)){
        cout << aco << endl;
    } else if ((madeira <= aco) && (madeira <= couro)){
        cout << madeira << endl;
    } else if ((couro <= madeira) && (couro <= aco)){
        cout << couro << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}