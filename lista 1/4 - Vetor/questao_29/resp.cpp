#include <iostream>
using namespace std;

int main(){
	int qtdSapos, numPedras;
	cin >> qtdSapos >> numPedras;
	
	int caminhoPedras[numPedras];
	
	for(int i = 0 ; i<numPedras ; i++){
		caminhoPedras[i] = 0;
	}
	
	for(int i = 0 ; i < qtdSapos ; i++){
		int pulo;
		cin >> pulo;
		for(int coordPulo = 0 ; coordPulo < numPedras; coordPulo = coordPulo + pulo ){
			caminhoPedras[coordPulo] = 1;
		}
	}
	
	for(int i = 0 ; i < numPedras ; i++){
		cout << caminhoPedras[i] << " ";
	}
	cout << endl;
	


	return 0;
	
}
