#include <iostream>
using namespace std;

int main(){
    int kanto, johan, hoenn;
    int valor1, valor2, valor3;

    cin >> kanto >> johan >> hoenn;
    cin >> valor1 >> valor2 >> valor3;

    kanto += valor1;
    johan += valor2;
    hoenn += valor3;

    cout << kanto << " " << johan << " " << hoenn << endl;

    return 0;
}