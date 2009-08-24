
#include <iostream>

using namespace std;


int IsDividingAll(long num) {
  bool is_ok = true;
  for (long i = 2; i < 21; ++i) {
    if (num % i != 0) {
      is_ok = false;
      break;
    }
  }
  return is_ok;
}

long Scan() {
  long sol;
  for (long i = 1; i < 99999999999; i++) {
    if (IsDividingAll(i)) {
      sol = i;
      break;
    }
  }
  return sol;
}

int main() {
  cout << "EXO 5" << endl;
  cout << Scan() << endl;;
  cout << endl;
  return 0;
}
