// number_trick.cpp: Nicola Gatto
// Description:

#include<iostream>
using namespace std;

int combineDigits(char d1, char d2, char d3) {
    char combined[4];

    combined[0] = d1;
    combined[1] = d2;
    combined[2] = d3;
    combined[3] = '\0';

    return atoi(combined);
}

int unodd(int x) {
    int result;

    if (x == 9) {
        cout << "Sum is 9. Trick will not work :(" << endl;
        exit(1);
    }

    if (x%2 == 1) {
        if (x + 11 > 20) {
            result = x - 11;
        } else {
            result = x + 11;
        }
    } else {
        result = x;
    }
    return result;
}

int main() {
    char a, b, c;
    int x, y, z, o1, o2, o3;

    cout << "Type in a three-digit number: ";
    cin >> a >> b >> c;

    x = combineDigits(a, b, c) % 11;
    y = combineDigits(b, c, a) % 11;
    z = combineDigits(c, a, b) % 11;

    o1 = x + y;
    o2 = y + z;
    o3 = z + x;

    o1 = unodd(o1) / 2;
    o2 = unodd(o2) / 2;
    o3 = unodd(o3) / 2;

    cout << "Your digits are " << o1 << o2 << o3 << endl;
}