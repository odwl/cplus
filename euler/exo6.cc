
#include <iostream>

using namespace std;

static const int kValue = 101;

const long& SumSquare(int num) {
  long* total = new long(0);
  for (int i = 1; i < num; ++i) {
    *total += i * i;
  }
  return *total;
}

const long& SquareSum(int num) {
  int total = 0;
  for (int i = 1; i < num; ++i) {
    total += i;
  }
  long* res = new long(total * total);
  return *res;
}

void Exo6() {
  printf("Sum Square: %ld\n", SumSquare(11));
  printf("Square Sum: %ld\n", SquareSum(11));
  printf("Solution: %ld\n", SquareSum(kValue) - SumSquare(kValue));
}

int main() {
  printf("EXO 6\n");
  Exo6();
  return 0;
}
