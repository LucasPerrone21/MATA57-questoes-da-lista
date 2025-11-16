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
            if(matriz[c][d] == 0){
                if((matriz[c+1][d] == 1) && (matriz[c-1][d] == 1) && (matriz[c][d+1] == 1) && (matriz[c][d-1] == 1)){
                    cout << c << " " << d << endl;
                    return 0;
                }
            };
        }
    }

    cout << "0 0" << endl;
    return 0;
}