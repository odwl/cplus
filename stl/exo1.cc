
#include <iostream>
#include <list>
#include <vector>
#include"exo1.h"

using namespace std;

void Exo1() {
  vector<int> vec = *Populate<vector<int> >();
  Display(vec);

  list<int> lst;
  Copy(vec, &lst);
  Display(lst);
}

int main() {
  cout << "STL EXO 1" << endl;
  Exo1();
  cout << endl;
  return 0;
}
