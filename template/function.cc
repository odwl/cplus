
#include <iostream>
#include"function.h"

using namespace std;

int main() {
  cout << "FUNCTION TEMPLATE" << endl;
  cout << Max<char>('e', 'd');
  cout << Max<int>(2, 3);
  cout << Max2(3.1, 2);
  cout << MaxRT<double, int, int>(3.1, 2);
  cout << MaxRT<double>(3.1, 2);

  cout << endl;
  return 0;
}
