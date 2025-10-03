#include <iostream>
using namespace std;

int main() {
    int qtdTitas;

    cin >> qtdTitas;

    qtdTitas -= 20;

    int qtdSoldados = qtdTitas / 5;

    cout << qtdSoldados << endl;
    return 0;
}