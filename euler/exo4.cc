
#include <iostream>

using namespace std;

bool IsPalindrome(int num) {
  char numstr[10];
  sprintf(numstr, "%d", num);
  int len = strlen(numstr);
  bool isPalindrom = true;
  for (int i = 0; i < len; ++i) {
    if (numstr[i] != numstr[len - i -1]) {
     isPalindrom = false;
     break;
    }
  }
  return isPalindrom;
}

int Scan() {
  int max = 0;
  for (int i = 100; i < 1000; ++i) {
    for (int j = i; j < 1000; ++j) {
      int num = i * j;
      if (max < num && IsPalindrome(num)) max = num;
    }
  }
  return max;
}

int main() {
  cout << "EXO 4" << endl;
  cout << Scan();
  cout << endl;
  return 0;
}
