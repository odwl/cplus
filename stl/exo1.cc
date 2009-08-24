
#include <iostream>
#include <list>
#include <vector>
#include"exo1.h"

using namespace std;

void Exo1() {
  vector<int>* vec = Populate<vector<int> >();
  Display(*vec);
  vector<int>* vec2 = new vector<int>;
  Populate(vec2);
  Display(*vec2);

  list<int> lst();
  Dispaly(lst);
}

int main() {
  cout << "STL EXO 1" << endl;
  Exo1();
  cout << endl;
  return 0;
}
