#include <iostream>
using namespace std;

int main(){
    int posi_x , posi_y;
    cin >> posi_x >> posi_y;

    char matriz[8][8];
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            matriz[i][j] = '-';
        }
    }

    matriz[posi_x][posi_y] = 'R';

    // Marcar Verticais
    for(int c = 0 ; c < 8 ; c++ ){
        if(matriz[c][posi_y] == '-'){
            matriz[c][posi_y] = 'X';
        }
    }

    //Marcar Horizontais
    for(int c = 0 ; c < 8 ; c++ ){
        if(matriz[posi_x][c] == '-'){
            matriz[posi_x][c] = 'X';
        }
    }

    //Marcar Diagonal
    for(int i = 0; i < 8; ++i) {
        for(int j = 0; j < 8; ++j) {
            if ((i - posi_x == j - posi_y) || (i - posi_x == posi_y - j)) {
                if(matriz[i][j] == '-') {
                    matriz[i][j] = 'X';
                }
            }
        }
    }

    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;

    }

}