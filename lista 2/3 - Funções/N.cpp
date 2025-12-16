#include <iostream>
using namespace std;
int pot(int base, int exp){
    int resultado = 1;
    for(int i = 0; i < exp; i++){
        resultado *= base;
    }
    return resultado;
}

int main() {
    int x, e;
    cin >> x >> e;
    cout << pot(x,e) << endl;
    return 0;
}