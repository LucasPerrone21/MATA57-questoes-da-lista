#include <iostream>
#include <string>
using namespace std;

int main() {
    struct bicho
    {
        string nome;
        int forca;
    };

    int qtd_bichos;
    cin >> qtd_bichos;


    bicho lista_bichos[qtd_bichos];

    for (int i = 0; i < qtd_bichos; i++)
    {
        cin >> lista_bichos[i].nome >> lista_bichos[i].forca;
    }

    int limite_forca;
    cin >> limite_forca;
    
    int dalek = 0;
    int cyberman = 0;
    
    for (int i = 0; i < qtd_bichos; i++)
    {
        if(limite_forca - lista_bichos[i].forca < 0) {
            break;
        }
        else {
            limite_forca -= lista_bichos[i].forca;
        }
        
        if (lista_bichos[i].nome == "Dalek")
        {
            dalek++;
        }
        else if (lista_bichos[i].nome == "Cyberman")
        {
            cyberman++;
        }



    }

    if (dalek + cyberman == qtd_bichos)
    {
        cout << "Consegui derrotar todos!" << endl;
    }
    else
    {
        cout << "Consegui derrotar " << dalek << " daleks e " << cyberman << " cyberman. Preciso de ajuda!" << endl;
    }
    
}