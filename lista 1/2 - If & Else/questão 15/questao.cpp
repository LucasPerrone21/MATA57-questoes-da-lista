#include <iostream>
using namespace std;

int main(){
    int stars, megaMushroom, koopa;
    cin >> stars >> megaMushroom >> koopa;

    if (stars == 30){
        cout << "PROXIMO MUNDO" << endl;
        return 0;
    }

    cout << (30 - stars) << " " << (6 - megaMushroom) << " " << (3 - koopa) << endl;


    return 0;
}