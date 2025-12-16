#include <iostream>
#include <cmath>

using namespace std;


int calcEsfera(float *area, float raio, float *volume){
    *volume = (4.0/3.0 * 3.14 * pow(raio, 3));
    *area = (4.0 * 3.14 * pow(raio, 2));
    
    return 0;
}

int main() {
    float area, volume, raio;

    cin>> raio;

    calcEsfera(&area, raio ,&volume);
    cout.precision(5);
    cout << area << endl;
    cout << volume << endl;

    return 0;
}