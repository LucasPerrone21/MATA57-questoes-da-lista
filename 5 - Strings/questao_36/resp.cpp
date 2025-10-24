#include <iostream>
#include <string>
using namespace std;

int main() {
    string frase;
    getline(cin, frase);

    int Q;
    string palavra;
    cin >> Q >> palavra;

    string fraseSemEspacos = "";
    for (char c : frase) {
        if (c != ' ') fraseSemEspacos += c;
    }

    int ocorrencias = 0;
    size_t pos = fraseSemEspacos.find(palavra);
    while (pos != string::npos) {
        ocorrencias++;
        pos = fraseSemEspacos.find(palavra, pos + palavra.size());
    }

    cout << ocorrencias << endl;
    if (ocorrencias == Q)
        cout << "SIM!" << endl;
    else
        cout << "NAO!" << endl;

    return 0;
}
