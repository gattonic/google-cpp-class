// values_by_reference.cpp: Nicola Gatto
// Description: Example of passing values by reference

#include <iostream>
using namespace std;

void accelerate(float &speed, float amount) {
    speed = speed + amount;
}

int main() {
    float speed = 65.4;
    float amount;

    cout << "current speed: " << speed << endl;
    cout << "Acceleration: ";
    cin >> amount;

    accelerate(speed, amount);

    cout << "speed after acceleration: " << speed << endl;
}