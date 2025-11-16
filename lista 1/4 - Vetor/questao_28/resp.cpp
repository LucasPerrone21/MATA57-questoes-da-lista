#include <iostream>
using namespace std;

int main(){

	int qtdFases, vida, temp;
	cin >> qtdFases;
	int fases[qtdFases];
	
	
	for(int i = 0 ; i < qtdFases; i++){
		cin >> fases[i];
	}
	
	cin >> vida;
	temp = vida;
	
	for(int i = 0 ; i < qtdFases; i++){
		if(fases[i] == 1){
			vida = temp;
			continue;
		}else if(fases[i] == 0){
			continue;
		}else{
			vida -= fases[i];
			if(vida <= 0){
				cout << "You Died" << endl;
			return 0;
			}
		}
	}
		
	
	cout << "Yes, you can" << endl;

	return 0;
	
}
