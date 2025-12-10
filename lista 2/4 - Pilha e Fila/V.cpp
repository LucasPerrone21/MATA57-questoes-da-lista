#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> filaMulheresCerta, filaMulheresErrada;
    vector<string> filaHomensCerta, filaHomensErrada;

    // Lendo fila feminina
    for (int i = 0; i < N; i++) {
        string nome;
        char genero;
        cin >> nome >> genero;

        if (genero == 'M') {
            filaMulheresCerta.push_back(nome);
        } else {
            filaHomensErrada.push_back(nome);
        }
    }

    for (int i = 0; i < N; i++) {
        string nome;
        char genero;
        cin >> nome >> genero;

        if (genero == 'H') {
            filaHomensCerta.push_back(nome);
        } else {
            filaMulheresErrada.push_back(nome);
        }
    }

    cout << "Fila Feminina:\n";
    if (filaMulheresCerta.empty() && filaMulheresErrada.empty()) {
        cout << "Vazia\n";
    } else {
        for (string &nome : filaMulheresCerta) cout << nome << "\n";
        for (string &nome : filaMulheresErrada) cout << nome << "\n";
    }

    cout << "Fila Masculina:\n";
    if (filaHomensCerta.empty() && filaHomensErrada.empty()) {
        cout << "Vazia\n";
    } else {
        for (string &nome : filaHomensCerta) cout << nome << "\n";
        for (string &nome : filaHomensErrada) cout << nome << "\n";
    }

    return 0;
}
