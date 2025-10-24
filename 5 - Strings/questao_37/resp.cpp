#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    bool ehPalindromo = true;
    int n = S.size();

    for (int i = 0; i < n / 2; i++) {
        if (S[i] != S[n - 1 - i]) {
            ehPalindromo = false;
            break;
        }
    }

    if (ehPalindromo)
        cout << "Sim" << endl;
    else
        cout << "Nao" << endl;

    return 0;
}
