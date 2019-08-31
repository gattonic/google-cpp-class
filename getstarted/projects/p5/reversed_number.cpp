// reversed_number.cpp: Nicola Gatto
// Description: 

#include <iostream>
using namespace std;

int reverse(int n) {
    int reversed_number = 0, remainder;
    while(n != 0) {
        remainder = n % 10;
        reversed_number = reversed_number*10 + remainder;
        n = n / 10;
    }
    return reversed_number;
}

int main() {
    int input_number, reversed_input, subtract, reverse_subtract, addition;
    cout << "input number: ";
    if (!(cin >> input_number)) {
        cout << "You typed in a non numerical value." << endl;
        return 1;
    }

    reversed_input = reverse(input_number);
    cout << "reverse it: " << reversed_input << endl;
    subtract = input_number - reversed_input;
    cout << "subtract: " << input_number << " - " << reversed_input << " = " << subtract << endl;
    reverse_subtract = reverse(subtract);
    cout << "reverse it: " << reverse_subtract << endl;
    addition = subtract + reverse_subtract;
    cout << "add: " << reverse_subtract << " + " << subtract << " = " << addition << endl;
    return 0;
}