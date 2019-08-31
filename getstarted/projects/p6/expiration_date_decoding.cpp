// expiration_date_decoding.cpp: Nicola Gatto
// Description: Decodes the expiration date to human readable date

#include <iostream>
#include <string>
using namespace std;

string decodeMonth(char month) {
    string decoded_month;
    switch(month) {
    case 'A':
        decoded_month = "Jan";
        break;
    case 'B':
        decoded_month = "Feb";
        break;
    case 'C':
        decoded_month = "Mar";
        break;
    case 'D':
        decoded_month = "Apr";
        break;
    case 'E':
        decoded_month = "May";
        break;
    case 'F':
        decoded_month = "Jun";
        break;
    case 'G':
        decoded_month = "Jul";
        break;
    case 'H':
        decoded_month = "Aug";
        break;
    case 'I':
        decoded_month = "Sep";
        break;
    case 'J':
        decoded_month = "Oct";
        break;
    case 'K':
        decoded_month = "Nov";
        break;
    case 'L':
        decoded_month = "Dec";
        break;
    default:
        cout << "Decoding error in month." << endl;
        break;
    }
    return decoded_month;
}

char decodeDayDigit(char day) {
    char decoded_day;
    switch(day) {
    case 'Q':
        decoded_day = '0';
        break;
    case 'R':
        decoded_day = '1';
        break;
    case 'S':
        decoded_day = '2';
        break;
    case 'T':
        decoded_day = '3';
        break;
    case 'U':
        decoded_day = '4';
        break;
    case 'V':
        decoded_day = '5';
        break;
    case 'W':
        decoded_day = '6';
        break;
    case 'X':
        decoded_day = '7';
        break;
    case 'Y':
        decoded_day = '8';
        break;
    case 'Z':
        decoded_day = '9';
        break;
    default:
        cout << "Decoding error in day digit." << endl;
    }
    return decoded_day;
}

string decodeYear(char inp_year) {
    int year = 1995;
    switch(inp_year) {
    case 'A':
        year = year + 1;
        break;
    case 'B':
        year = year + 2;
        break;
    case 'C':
        year = year + 3;
        break;
    case 'D':
        year = year + 4;
        break;
    case 'E':
        year = year + 5;
        break;
    case 'F':
        year = year + 6;
        break;
    case 'G':
        year = year + 7;
        break;
    case 'H':
        year = year + 8;
        break;
    case 'I':
        year = year + 9;
        break;
    case 'J':
        year = year + 10;
        break;
    case 'K':
        year = year + 11;
        break;
    case 'L':
        year = year + 12;
        break;
    case 'M':
        year = year + 13;
        break;
    case 'N':
        year = year + 14;
        break;
    case 'O':
        year = year + 15;
        break;
    case 'P':
        year = year + 16;
        break;
    case 'Q':
        year = year + 17;
        break;
    case 'R':
        year = year + 18;
        break;
    case 'S':
        year = year + 19;
        break;
    case 'T':
        year = year + 20;
        break;
    case 'U':
        year = year + 21;
        break;
    case 'V':
        year = year + 22;
        break;
    case 'W':
        year = year + 23;
        break;
    case 'X':
        year = year + 24;
        break;
    case 'Y':
        year = year + 25;
        break;
    case 'Z':
        year = year + 26;
        break;
    default:
        cout << "Decoding error in year." << endl;
        break;
    }
    return to_string(year);
}

string decodeDate(char month, char day_1, char day_2, char year) {
    return decodeMonth(month) + " " + decodeDayDigit(day_1) + decodeDayDigit(day_2) + " " + decodeYear(year);
}

int main() {
    char input_enc_date[4];
    string expiration_date;
    cout << "Type in the encoded date: ";
    cin >> input_enc_date;
    expiration_date = decodeDate(input_enc_date[0], input_enc_date[1], input_enc_date[2], input_enc_date[3]);
    cout << "The expiration date is " << expiration_date.c_str();
}
