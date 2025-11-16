#include <iostream>
using namespace std;

int main() {
    long int totalSeconds;

    int hours, minutes, seconds;

    cin >> totalSeconds;

    hours = totalSeconds / 3600;
    minutes = (totalSeconds / 60) % 60 ;
    seconds = totalSeconds % 60;

    cout << hours << "h " << minutes << "m " << seconds << "s" << endl;
}