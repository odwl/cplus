
#include <iostream>
#include <list>
#include <vector>
#include"exo1.h"

using namespace std;

void Exo1() {
  vector<int> vec2;
  Populate(vec2);
  Display(vec2);
  vector<int>* vec3 = Populate2<vector<int> >();
  Display(*vec3);
  vector<int>* vec4 = new vector<int>;
  Populate3(vec4);
  Display(*vec4);
}

int main() {
  cout << "STL EXO 1" << endl;
  Exo1();
  cout << endl;
  return 0;
}
