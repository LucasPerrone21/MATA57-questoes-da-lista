#include <iostream>
using namespace std;

int main(){
    int EntregaX, EntregaY, localX, LocalY;
    cin >> EntregaX >> EntregaY >> localX >> LocalY;
    if(EntregaX == localX && EntregaY == LocalY){
        cout << "Soltar pacote" << endl;
    } else {
        cout << "Nao soltar pacote" << endl;
    }
    return 0;
}