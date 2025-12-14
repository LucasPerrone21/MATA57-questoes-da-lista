#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int N;
    
    if (cin >> N) {
        cin.ignore();

        vector<string> aliados(N);

        for (int i = 0; i < N; i++) {
            getline(cin, aliados[i]);
        }
        sort(aliados.begin(), aliados.end());

        int M;
        cin >> M;
        cin.ignore();

        string nome_necessario;
        bool vitoria = true;

        for (int i = 0; i < M; i++) {
            getline(cin, nome_necessario);


            if (vitoria) {
                if (!binary_search(aliados.begin(), aliados.end(), nome_necessario)) {
                    vitoria = false;
                }
            }
        }

        if (vitoria) {
            cout << "Sociedade das almas salva, Ichigo" << endl;
        } else {
            cout << "Estamos perdidos, Ichigo" << endl;
        }
    }

    return 0;
}