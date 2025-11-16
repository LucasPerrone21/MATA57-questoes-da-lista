#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int alcanceMin, alcanceMax;
    int N, M; 
    cin >> alcanceMin >> alcanceMax;
    cin >> N >> M;

    char campo[N][M];
    int xC, yC;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> campo[i][j];
            if (campo[i][j] == 'C') {
                xC = i;
                yC = j;
            }
        }
    }

    int total = 0;


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (campo[i][j] == 'G') {
                int distancia = abs(xC - i) + abs(yC - j);
                if (distancia >= alcanceMin && distancia <= alcanceMax) {
                    total++;
                }
            }
        }
    }

    cout << total << endl;
    return 0;
}
