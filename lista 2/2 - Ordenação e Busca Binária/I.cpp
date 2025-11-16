#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int qtdFeiticosOK, qtdFeiticosRuim, qtdBuscas;

    cin >> qtdFeiticosOK;
    vector<string> feiticoOK(qtdFeiticosOK);

    for (int i = 0; i < qtdFeiticosOK; i++) {
        cin >> feiticoOK[i];
    }

    cin >> qtdFeiticosRuim;
    vector<string> feiticoRuim(qtdFeiticosRuim);

    for (int i = 0; i < qtdFeiticosRuim; i++) {
        cin >> feiticoRuim[i];
    }

    cin >> qtdBuscas;

    for (int i = 0; i < qtdBuscas; i++) {
        string consulta;
        cin >> consulta;

        if (binary_search(feiticoRuim.begin(), feiticoRuim.end(), consulta)) {
            cout << "Proibido" << endl;
            continue;
        }
        cout << "Geral" << endl;

    }

    return 0;
}


