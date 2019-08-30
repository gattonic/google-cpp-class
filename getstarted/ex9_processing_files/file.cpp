// file.cpp: Nicola Gatto
// Description: This program saves person records to a file and reads it out

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char first_name[30], last_name[30], file_name[20];
    int age;


    cout << "Enter the name of the file: ";
    cin >> file_name;

    ofstream people_out(file_name, ios::out);

    char continue_reading = 'y';
    while(continue_reading == 'y') {
        // Read data
        cout << "Enter first name: ";
        cin >> first_name;
        cout << "Enter last name: ";
        cin >> last_name;
        cout << "Enter age: ";
        cin >> age;

        // Write to file
        people_out << first_name << endl << last_name << endl << age << endl;

        do {
            cout << "Do you want to read more records?(y/n) ";
            cin >> continue_reading;
        } while (continue_reading != 'y' && continue_reading != 'n');
    }
    people_out.close();

    // Read in the file
    ifstream people_in(file_name);

    while(true) {
        people_in >> first_name >> last_name >> age;
        if (people_in.eof())
            break;

        cout << "First Name:\t" << first_name << endl;
        cout << "Last Name:\t" << last_name << endl;
        cout << "Age:\t\t" << age << endl;
        cout << endl;
    }
    people_in.close();

    return 0;
}