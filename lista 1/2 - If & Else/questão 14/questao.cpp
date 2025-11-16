#include <iostream>
using namespace std;

int main(){
    char p1, p2;
    cin >> p1 >> p2;

    if (p1 != p2 && p1 != 'N' && p2 != 'N'){
        cout << "classificado" << endl;
    } else {
        cout << "eliminado" << endl;
    }

    return 0;
}