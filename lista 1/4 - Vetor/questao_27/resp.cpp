#include <iostream>
using namespace std;

bool checarAtaque(int coordenada, int campo[], int tamanhoCampo){
	if(campo[coordenada] == 1){
		if(!(coordenada == 0) && !(coordenada == tamanhoCampo - 1)){
			
		if ((campo[coordenada - 1] == 1) && (campo[coordenada + 1] == 1)  ){
			
			campo[coordenada - 1] = 0;
			campo[coordenada + 1] = 0;
			campo[coordenada] = 0;
		
			return true;
		}
		}
	
	}
	
	return false;

}

int main(){

	int tamanhoCampo , qtdAtaques, qtdDestruidos = 0;
	cin >> tamanhoCampo >> qtdAtaques;
	int campo[tamanhoCampo];
	
		
	for(int i = 0; i < tamanhoCampo ; i++){
		cin >> campo[i];
	}
	
	for(int i = 0; i < qtdAtaques ; i++){
		int coordenada;
		cin >> coordenada;
		if(checarAtaque(coordenada, campo, tamanhoCampo)){
		qtdDestruidos++;
		} 
	}
	
	cout << qtdDestruidos << endl ;
	return 0;
	
}
