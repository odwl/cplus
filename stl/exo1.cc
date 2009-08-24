
#include <iostream>
#include <list>
#include <vector>
#include"exo1.h"

using namespace std;

void Exo1() {
  vector<int> vec = *Populate<vector<int> >();
  Display(vec);

  list<int> lst(vec.size());
  Copy(vec, &lst);
  Display(lst);

  list<int>* lst2 = new list<int>;
  Copy(vec, lst2);
  Display(*lst2);
}

int main() {
  cout << "STL EXO 1" << endl;
  Exo1();
  cout << endl;
  return 0;
}
