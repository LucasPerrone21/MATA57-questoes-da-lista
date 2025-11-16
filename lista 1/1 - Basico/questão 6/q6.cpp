#include <iostream>
using namespace std;

int main(){
    int total, frente, direita, esquerda, tras;

    cin >> total >> frente >> direita >> esquerda >> tras;
    
    int soma = frente + direita + esquerda + tras;
    int result = total - soma;

    cout << result << endl;
    return 0;

}
