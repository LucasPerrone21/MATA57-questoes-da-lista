#include <iostream>
using namespace std;

int main(){
    int andares, contador1 = 1, contador2;

    cin >> andares;

    for (int tamanho = 1; tamanho <= andares; tamanho++)
    {   
        contador2 = 0;
        while (contador2 < andares - tamanho)
        {
            cout << " ";
            contador2++;
        }
        
        int contador1 = 0;
        while(contador1 < ((tamanho * 2) - 1)){
            cout << tamanho;
            contador1++;
        }
        cout << endl;
    }
    
    
}