
#include <iostream>
#include <stdlib.h>             /* div_t */

using namespace std;

const int MAX = 1000;

int AddAll() {
  int total = 0;
  for (int i = 1; i < MAX; ++i) {
    if (i % 3 == 0 || i % 5 == 0) total += i;
  }
  return total;
}

int SumMultiple(int mult, int max) {
   int total = 0;
   for (int i = mult; i < max; i += mult) total += i;
   return total;
}

int  AddAll2() {
  return SumMultiple(3, MAX) + SumMultiple(5, MAX) + SumMultiple(15, MAX);
}

/**
 *  to is exclusive.
 */
int Sum(int from, int to) {
  return to / 2 * (to - 1)  - from / 2 * (from - 1);
}

int AddAll3() {
  const int limit1 = ((MAX - 1 )/ 15) + 1;
  const int limit2 = ((MAX - 1 )/ 5) + 1;
  const int limit3 = ((MAX - 1 )/ 3) + 1;

  int total1 = Sum(0, limit1) * -7;
  int total2 = Sum(limit1, limit2) * 8;
  int total3 = Sum(limit2, limit3 ) * 3;

  return total3 + total2 + total1;
}

int main () {
  cout << "EXO 1" << endl;
  cout << AddAll3() << endl;
//  cout << AddAll2() << endl;
  //cout << AddAll() << endl;
  return 0;
}
