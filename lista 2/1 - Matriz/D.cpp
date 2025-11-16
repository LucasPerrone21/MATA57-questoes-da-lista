#include <iostream>
using namespace std;

const int tamanhoMax = 100; // define o tamanho máximo da matriz

bool checaCamera(int tamanho, char matriz[tamanhoMax][tamanhoMax], int x, int y) {
    // checar em cima
    for (int c = x - 1; c >= 0; c--) {
        if (matriz[c][y] == 'C') return true;
        if (matriz[c][y] == 'O') break;
    }

    // checar em baixo
    for (int c = x + 1; c < tamanho; c++) {
        if (matriz[c][y] == 'C') return true;
        if (matriz[c][y] == 'O') break;
    }

    // checar esquerda
    for (int c = y - 1; c >= 0; c--) {
        if (matriz[x][c] == 'C') return true;
        if (matriz[x][c] == 'O') break;
    }

    // checar direita
    for (int c = y + 1; c < tamanho; c++) {
        if (matriz[x][c] == 'C') return true;
        if (matriz[x][c] == 'O') break;
    }

    return false;
}

int main() {
    int tamanho;
    cin >> tamanho;

    char matriz[tamanhoMax][tamanhoMax];

    for (int c = 0; c < tamanho; c++) {
        for (int d = 0; d < tamanho; d++) {
            cin >> matriz[c][d];
        }
    }

    for (int c = 0; c < tamanho; c++) {
        for (int d = 0; d < tamanho; d++) {
            if (matriz[c][d] == 'S') {
                if (checaCamera(tamanho, matriz, c, d)) {
                    cout << "Estou sendo visto!" << endl;
                    return 0;
                } else {
                    cout << "Barra Limpa" << endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}
