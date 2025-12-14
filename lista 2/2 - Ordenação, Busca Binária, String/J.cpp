#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int N;
    
    while (cin >> N) {
        cin.ignore(); 
        
        vector<string> playlist(N);

        for (int i = 0; i < N; i++) {
            getline(cin, playlist[i]);
        }

        sort(playlist.begin(), playlist.end());

        for (int i = 0; i < N; i++) {
            cout << playlist[i] << endl;
        }
    }

    return 0;
}