#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<string> inventario;
    string item = "oioi", itemBuscado;

    while (item != "fim")
    {
        cin >> item;

        inventario.push_back(item);
    }

    cin >> itemBuscado;

    for(string i : inventario){
        if(i == itemBuscado){
            cout << "item encontrado" << endl;
            return 0;
        }
    }

    cout << "voce ainda nao descobriu este item" << endl;
    return 0;
}