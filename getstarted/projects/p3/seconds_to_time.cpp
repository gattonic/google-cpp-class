// seconds_to_time.cpp: Nicola Gatto
// Description: This program takes as input seconds and outputs the number of
//  hours, minutes, and seconds.

#include <iostream>
using namespace std;

void secondsToTime(int seconds) {
  int hours, minutes;
  minutes = seconds / 60;
  hours = minutes / 60;
  seconds = seconds - (hours * 60 * 60);
  minutes = seconds / 60;
  seconds = seconds - (minutes * 60);

  cout << "Hours: " << hours << endl;
  cout << "Minutes: " << minutes << endl;
  cout << "Seconds: " << seconds << endl;
}

int main() {
  int seconds;
  cout << "Number of seconds: ";
  if (!(cin >> seconds)) {
    cout << "You typed in a non numeric value." << endl;
    return 1;
  }
  secondsToTime(seconds);
  return 0;
}