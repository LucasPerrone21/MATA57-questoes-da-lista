#include <iostream>
using namespace std;

int main(){
    int l1, p1, l2, p2, l3, p3;
    cin >> l1 >> p1 >> l2 >> p2 >> l3 >> p3;
    
    if ((l1 + l2 + l3) > (p1 + p2 + p3)){
        cout << "Lucas" << endl;
    }
    else if ((l1 + l2 + l3) < (p1 + p2 + p3)){
        cout << "Pedro" << endl;
    }
    else{
        cout << "Empate" << endl;
    }
    return 0;
}