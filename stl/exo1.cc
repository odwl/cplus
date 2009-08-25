
#include <iostream>
#include <list>
#include <vector>
#include"exo1.h"

using namespace std;

void Exo1() {
  vector<int> vec = *Populate<vector<int> >();
  cout << "vector is: "; 
  Display(vec);

  list<int> lst;
  cout << "list is: ";
  Copy(vec, &lst);
  Display(lst);

  vec[0] = 1000;
  Exchange(&vec, &lst);
  Display(vec);
  Display(lst);
}

int main() {
  cout << "STL EXO 1" << endl;
  Exo1();
  cout << endl;
  return 0;
}
