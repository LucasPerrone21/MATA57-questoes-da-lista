#include <iostream>
using namespace std;

int main(){
	int qtdPessoas;
	cin >> qtdPessoas;
	
	
	int pessoas[qtdPessoas];
	
	for(int i = 0 ; i < qtdPessoas ; i++){
		cin >> pessoas[i];
	}
	
	for(int i = 0 ; i < qtdPessoas; i++){
		for(int j = i + 1 ; j < qtdPessoas; j++){
		 	if(pessoas[i] == pessoas[j]){
		 		cout << pessoas[i] << endl;
		 		return 0;
		 	}
		} 
	}
	
	cout << -1 << endl;
	return 0;
}


