#include <iostream>
using namespace std;

int main(){
    long massa,velocidade;

    cin >> massa >> velocidade;

    long energia = (massa * velocidade * velocidade);

    cout << energia << endl;
    return 0;
}