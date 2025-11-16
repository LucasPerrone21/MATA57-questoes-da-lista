#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    float total = ((a + b) * (c - d) * (e + f))/2.0;

    cout <<"Eu sou FERA nas continhas e o resultado é " << fixed << setprecision(1) << total << endl;


    return 0;
}