// cricket_temperature.cpp: Nicola Gatto
// Description: Returns the current temperature based on the number of cricket
//  chirps per minute

#include<iostream>
using namespace std;

int main() {
    int chirps_per_minute;
    float degree;

    cout << "Number of chirps per minute: ";
    if (!(cin >> chirps_per_minute)) {
        cout << "The input is non numeric." << endl;
        return 1;
    }

    degree = (40 + chirps_per_minute)/4;

    cout << "The temperature is " << degree << " degrees." << endl;

    return 0;
}