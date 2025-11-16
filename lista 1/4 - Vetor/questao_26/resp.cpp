#include <iostream>
using namespace std;

int main(){
	int qtdVetor, maximo;
	
	cin >> qtdVetor;
	
	int vetor[qtdVetor];
	
	bool sefufu = false;
	
	for(int i = 0; i < qtdVetor; i++){
		cin >> vetor[i];
	}
	
	cin >> maximo;
	
	for(int i = 0; i < qtdVetor; i++){
		if(vetor[i] > maximo){
			cout << i << endl;
			cout << 0 << endl;
			return 0;
		}
	
	}
	
	cout << qtdVetor << endl;
	cout << 1 << endl;
	return 0;
	
}