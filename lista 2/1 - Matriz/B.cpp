#include <iostream>
using namespace std;

int main(){
    int linha, coluna;
    cin >> linha >> coluna;
    int matriz[linha][coluna];

    for(int c = 0 ; c < linha ; c++){
        for(int d = 0 ; d < coluna ; d++){
            cin >> matriz[c][d];
        }
    }

    for(int c = 0 ; c < linha ; c++){
        for(int d = 0 ; d < coluna ; d++){
            if((matriz[c][d] == 0) && (d+1 <= coluna - 1)){
                if(matriz[c][d +1 ] == 0){
                    cout << "Fileira: " << c + 1 << endl;
                    cout << "Assentos: " << d + 1  << " e " << d + 2 << endl;
                    return 0;
                }
            };
        }
    }

    return 0;
}