#include <iostream>
#include <vector>

using namespace std;

int main() {
    int X;
    
    if (cin >> X) {
        vector<int> frequencia(10001, 0);
        
        int numero;

        for (int i = 0; i < X; i++) {
            cin >> numero;
            frequencia[numero]++;
        }

        bool primeiro = true;

        for (int i = 1; i <= 10000; i++) {

            if (frequencia[i] == 3) {
                if (!primeiro) {
                    cout << " ";
                }
                cout << i;
                primeiro = false;
            }
        }
        
        cout << endl;
    }

    return 0;
}