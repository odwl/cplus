
#include <iostream>

using namespace std;

const int MAX = 4000000;

void Fibo(int& a, int& b) {
  //cout << a << ' ';
  int inter = a;
  a = b;
  b += inter;
}

int SumEvenFibo(const int max) {
  int a = 1;
  int b = 1;
  int total = 0;
  while (a < max) {
    if (a % 2 == 0) total += a;
    Fibo(a, b);
  }
  //for (int i = 1; a < max; ++i){
  //  cout << a << ' ' << i << endl;
  //  if (i % 3) total +=a;
  //  Fibo(a, b);
  //}
  return total;
}

int main() {
  cout << "EXO 2" << endl;
  cout << SumEvenFibo(MAX);
  cout << endl;
  return 0;
}
