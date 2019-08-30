#include <iostream>
using namespace std;

int main() {
    srand(time(NULL));
    cout << rand() % 100 << " is a random number in the range of 0 to 99" << endl;
    cout << rand() % 100 + 1 << " is a random number in the range of 1 to 100" << endl;
    cout << rand() % 30 + 1985 << " is a random number in the range of 1985 to 2014" << endl;
    return 0;
}