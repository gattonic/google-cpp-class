// banner_print.cpp: Nicola Gatto
// Description: Takes a text and prints a banner

#include <iostream>
using namespace std;

void printA() {
    cout << "    A" << endl;
    cout << "   A A" << endl;
    cout << "  AAAAA" << endl;
    cout << " A     A" << endl;
    cout << "A       A" << endl;
}

void printB() {
    cout << "BBBBBBB" << endl;
    cout << "BB     B" << endl;
    cout << "BBBBBBB" << endl;
    cout << "BB     B" << endl;
    cout << "BBBBBBB" << endl;
}

void printC() {
    cout << "CCCCCCCC" << endl;
    cout << "CC" << endl;
    cout << "CC" << endl;
    cout << "CC" << endl;
    cout << "CCCCCCCC" << endl;
}

void printD() {
    cout << "DDDDDDDD" << endl;
    cout << "DD     DD" << endl;
    cout << "DD     DD" << endl;
    cout << "DD     DD" << endl;
    cout << "DDDDDDD" << endl;
}

void printE() {
    cout << "EEEEEEEEE" << endl;
    cout << "EE" << endl;
    cout << "EEEEEEE" << endl;
    cout << "EE" << endl;
    cout << "EEEEEEEEE" << endl;
}

void printF() {
    cout << "FFFFFFFFF" << endl;
    cout << "FF" << endl;
    cout << "FFFFFFF" << endl;
    cout << "FF" << endl;
    cout << "FF" << endl;
}

void printG() {
    cout << "GGGGGGGGG" << endl;
    cout << "GG" << endl;
    cout << "GG  GGGGG" << endl;
    cout << "GG     GG" << endl;
    cout << "GGGGGGGGG" << endl;
}

void printH() {
    cout << "HH     HH" << endl;
    cout << "HH     HH" << endl;
    cout << "HHHHHHHHH" << endl;
    cout << "HH     HH" << endl;
    cout << "HH     HH" << endl;
}

void printI() {
    cout << "IIIIIIIII" << endl;
    cout << "    I    " << endl;
    cout << "    I    " << endl;
    cout << "    I    " << endl;
    cout << "IIIIIIIII" << endl;
}

void printJ() {
    cout << "JJJJJJJJJ" << endl;
    cout << "       JJ" << endl;
    cout << "       JJ" << endl;
    cout << "  JJ   JJ" << endl;
    cout << "  JJJJJJJ" << endl;
}

void printK() {
    cout << "KK   KK" << endl;
    cout << "KK KK" << endl;
    cout << "KKK" << endl;
    cout << "KK KK" << endl;
    cout << "KK   KK" << endl;
}

void printL() {
    cout << "LL" << endl;
    cout << "LL" << endl;
    cout << "LL" << endl;
    cout << "LL" << endl;
    cout << "LLLLLLLLL" << endl;
}

void printM() {
    cout << "MM      MM" << endl;
    cout << "M M    M M" << endl;
    cout << "M  M  M  M" << endl;
    cout << "M   MM   M" << endl;
    cout << "M        M" << endl;
}

void printN() {
    cout << "NN    N" << endl;
    cout << "N N   N" << endl;
    cout << "N  N  N" << endl;
    cout << "N   N N" << endl;
    cout << "N    NN" << endl;
}

void printO() {
    cout << "OOOOOOOOO" << endl;
    cout << "OO     OO" << endl;
    cout << "OO     OO" << endl;
    cout << "OO     OO" << endl;
    cout << "OOOOOOOOO" << endl;
}

void printP() {
    cout << "PPPPPPPPP" << endl;
    cout << "PP     PP" << endl;
    cout << "PPPPPPPPP" << endl;
    cout << "PP" << endl;
    cout << "PP" << endl;
}

void printQ() {
    cout << "QQQQQQQ" << endl;
    cout << "QQ   QQ" << endl;
    cout << "QQ   QQ" << endl;
    cout << "QQ   QQ" << endl;
    cout << "QQQQQQQQQQ" << endl;
}

void printR() {
    cout << "RRRRRR" << endl;
    cout << "RR   RR" << endl;
    cout << "RRRRRR" << endl;
    cout << "RR RR" << endl;
    cout << "RR  RR" << endl;
}

void printS() {
    cout << "SSSSSSSSS" << endl;
    cout << "SS" << endl;
    cout << "SSSSSSSSS" << endl;
    cout << "       SS" << endl;
    cout << "SSSSSSSSS" << endl;
}

void printT() {
    cout << "TTTTTTTT" << endl;
    cout << "   TT   " << endl;
    cout << "   TT" << endl;
    cout << "   TT" << endl;
    cout << "   TT" << endl;
}

void printU() {
    cout << "UU    UU" << endl;
    cout << "UU    UU" << endl;
    cout << "UU    UU" << endl;
    cout << "UU    UU" << endl;
    cout << "UUUUUUUU" << endl;
}

void printV() {
    cout << "VV      VV" << endl;
    cout << " VV    VV" << endl;
    cout << "  VV  VV" << endl;
    cout << "   VVVV" << endl;
    cout << "    VV" << endl;
}

void printW() {
    cout << "W      W" << endl;
    cout << "W  WW  W" << endl;
    cout << "W  WW  W" << endl;
    cout << "W  WW  W" << endl;
    cout << "WWW  WWW" << endl;
}

void printX() {
    cout << "XX     XX" << endl;
    cout << " XX  XX  "<< endl;
    cout << "   XX    " << endl;
    cout << " XX  XX  " << endl;
    cout << "XX     XX" << endl;
}

void printY() {
    cout << "YY    YY" << endl;
    cout << " YY  YY" << endl;
    cout << "   YY" << endl;
    cout << "   YY" << endl;
    cout << "   YY" << endl;
}

void printZ() {
    cout << "ZZZZZZZZZ" << endl;
    cout << "      ZZ" << endl;
    cout << "    ZZ" << endl;
    cout << "  ZZ" << endl;
    cout << "ZZZZZZZZ" << endl;
}

void printChar(char c) {
    switch (c)
    {
    case 'a':
    case 'A':
        printA();
        break;
    case 'b':
    case 'B':
        printB();
        break;
    case 'c':
    case 'C':
        printC();
        break;
    case 'd':
    case 'D':
        printD();
        break;
    case 'e':
    case 'E':
        printE();
        break;
    case 'f':
    case 'F':
        printF();
        break;
    case 'g':
    case 'G':
        printG();
        break;
    case 'h':
    case 'H':
        printH();
        break;
    case 'i':
    case 'I':
        printI();
        break;
    case 'j':
    case 'J':
        printJ();
        break;
    case 'k':
    case 'K':
        printK();
        break;
    case 'l':
    case 'L':
        printL();
        break;
    case 'm':
    case 'M':
        printM();
        break;
    case 'n':
    case 'N':
        printN();
        break;
    case 'o':
    case 'O':
        printO();
        break;
    case 'p':
    case 'P':
        printP();
        break;
    case 'q':
    case 'Q':
        printQ();
        break;
    case 'r':
    case 'R':
        printR();
        break;
    case 's':
    case 'S':
        printS();
        break;
    case 't':
    case 'T':
        printT();
        break;
    case 'u':
    case 'U':
        printU();
        break;
    case 'v':
    case 'V':
        printV();
        break;
    case 'w':
    case 'W':
        printW();
        break;
    case 'x':
    case 'X':
        printX();
        break;
    case 'y':
    case 'Y':
        printY();
        break;
    case 'z':
    case 'Z':
        printZ();
        break;
    case ' ':
        cout << endl << endl;
        break;
    default:
        return;
        break;
    }
    cout << endl;
}

void textToBanner(char text[], int size) {
    for (int i = 0; i < size; i++) {
        printChar(text[i]);
    }
}

int main() {
    char user_str[100];
    for (int i = 0; i < 100; i++) {
        user_str[i] = '!';
    }
    cout << "Type in a text: ";
    cin.getline(user_str, 100);
    textToBanner(user_str, 100);
}