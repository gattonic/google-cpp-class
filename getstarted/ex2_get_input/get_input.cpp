// get_input.cpp: Nicola Gatto
// Description: Use cin to get input

#include <iostream>
using namespace std;

int main() {
    int input_var = 0;

    do {
        cout << "Enter a number (-1 = quit): ";
        if (!(cin >> input_var)) {
            cout << "You entered a non-numeric. Please retry..." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else if (input_var != -1) {
            cout << "Yout entered " << input_var << endl;
        }
    } while(input_var != -1);
    cout << "Exiting..." << endl;
    return 0;
}