// guessing_game.cpp: Nicola Gatto
// Description: This game requires the user to guess a number

#include <iostream>
using namespace std;

int main() {
    int random_number, user_guess;

    srand(time(NULL));
    
    random_number = rand() % 101;
    
    do {
        cout << "Guess a number: ";
        if (!(cin >> user_guess)) {
            cout << "Your input is non numeric. Try again..." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            if (random_number < user_guess) {
                cout << "The secret number is smaller." << endl;
            } else if (random_number > user_guess) {
                cout << "The secret number is bigger." << endl;
            }
        }
    } while(random_number != user_guess);
    
    cout << "You guessed the number!" << endl;
    cout << "The number was " << random_number << "." << endl;
    
    return 0;
}