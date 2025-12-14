#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int X;
    
    if (cin >> X) {
        vector<int> caminhantes(X);


        for (int i = 0; i < X; i++) {
            cin >> caminhantes[i];
        }

        int N;
        cin >> N;

        int id_suspeito;
        bool encontrou = false;

        for (int i = 0; i < N; i++) {
            cin >> id_suspeito;
            
            if (!encontrou) {
                if (binary_search(caminhantes.begin(), caminhantes.end(), id_suspeito)) {
                    encontrou = true;
                }
            }
        }

        if (encontrou) {
            cout << "Preparem o vidro de dragao!!!" << endl;
        } else {
            cout << "E assim termina nossa vigilia" << endl;
        }
    }

    return 0;
}