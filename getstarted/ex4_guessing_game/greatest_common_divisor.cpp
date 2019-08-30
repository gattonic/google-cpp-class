// greatest_common_divisor.cpp: Nicola Gatto
// Description: Calculates the greates common divisor of two values

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    if (!(cin >> a >> b)) {
        cout << "Only integer values are allowed!" << endl;
    } else {
        cout << "gcd(" << a << ", " << b << ") = " << gcd(a, b) << endl;
    }
    return 0;
}