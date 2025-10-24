#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isVogal(char c) {
    char vogais[6] = {'a', 'e', 'i', 'o', 'u', ' '};
    for (int i = 0; i < 6; i++) {
        if (c == vogais[i]) {
            return true;
        }
    }
    return false;
}

int main() {
    int qtdLivros, tamanhoMax;
    cin >> qtdLivros >> tamanhoMax;
    cin.ignore();

    vector<string> livros(qtdLivros);

    for (int i = 0; i < qtdLivros; i++) {
        getline (cin, livros[i]);
    }

    for (string item : livros) {
        int contador = 0;
        for (int c = 0; c < (int)item.size(); c++) {
            if (isVogal(item[c])) continue;
            contador++;
        }

        if (contador > tamanhoMax)
            cout << "0" << endl;
        else
            cout << "1" << endl;
    }

    return 0;
}
