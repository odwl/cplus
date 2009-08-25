
#include <iostream>
#include <list>
#include <vector>
#include"exo1.h"
#include"ESTLUtil.h"

using namespace std;
using namespace ESTLUtils;

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
  cout << "Test Exchange" << endl;
  Display(vec);
  Display(lst);

  cout << "Test Extend" << endl;
  Extend(&vec, lst);
  Display(vec);

  cout << "Test Remove" << endl;
  Remove(&vec, 1000);
  Display(vec);

  Timer t;
  ToProfile();
  cout << t << endl;
}

int main() {
  cout << "STL EXO 1" << endl;
  Exo1();
  cout << endl;
  return 0;
}
