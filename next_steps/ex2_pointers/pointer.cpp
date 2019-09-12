// pointer.cpp

#include <iostream>
using namespace std;

void DoIt(int &foo, int goo);

int main() {
  int *foo, *goo; // declare pointer variables foo and goo
  foo = new int; // initialize foo
  *foo = 1; // dereference and assign *foo = 1
  goo = new int; // initialize goo
  *goo = 3; // dereference and assign *goo = 3
  *foo = *goo + 3; // *foo = *goo + 3 = 3 + 3 = 6
  foo = goo; // foo => goo => (*goo = 3 ; *foo = 3)
  *goo = 5; // foo => goo => (*goo = 5; *foo=5)
  *foo = *goo + *foo; // foo => goo *foo = *goo + *foo = 5 + 5 = 10
  DoIt(*foo, *goo); // *foo = *goo = 13
                    // goo = foo + 4 = 13 + 4 = 17
                    // *foo = *goo = 17 + 3 = 20
                    // goo = foo = 20
  cout << (*foo) << endl; // 20
}

void DoIt(int &foo, int goo) {
  foo = goo + 3;
  goo = foo + 4;
  foo = goo + 3;
  goo = foo;
} 