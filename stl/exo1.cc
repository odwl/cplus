
#include <iostream>
#include <list>
#include <vector>
#include"exo1.h"

using namespace std;

void Exo1() {
  vector<int> vec = Populate<vector<int> >();
  vector<int> vec2;
  Populate(vec2);
  Display(vec);
  Display(vec2);
}

int main() {
  cout << "STL EXO 1" << endl;
  Exo1();
  cout << endl;
  return 0;
}
