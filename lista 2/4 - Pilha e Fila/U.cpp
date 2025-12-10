#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> pilha;  // armazena apenas os componentes válidos

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;

        if (x == -1) {
            if (!pilha.empty()) {
                pilha.pop_back(); // remove o último positivo válido
            }
        } else {
            pilha.push_back(x); // componente útil
        }
    }

    long long soma = 0;
    for (int v : pilha) soma += v;

    cout << soma << endl;

    return 0;
}
