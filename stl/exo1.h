
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template <typename T1, typename T2>
void Copy(const T1& cont1, T2* cont2) {
  *cont2 = T2(cont1.begin(), cont1.end());
}

template <typename T1, typename T2>
void Exchange(T1* cont1, T2* cont2) {
  swap_ranges(cont1->begin(), cont1->end(), cont2->begin());
}

template <typename T1, typename T2>
void Extend(T1* cont1, const T2& cont2) {
  cont1->insert(cont1->end(), cont2.begin(), cont2.end());
}

template <typename T, typename S>
void Remove(T* cont, const S& val){
  remove(cont->begin(), cont->end(), val);
}

template <typename T>
T* Populate() {
  T* cont = new T;
  for (int i = 0; i < 10; ++i) {
    cont->push_back(i);
  }
  return cont;
}

template <typename T>
void Display(const T& cont) {
  typename T::const_iterator it;
  for (it = cont.begin(); it != cont.end(); ++it){
    cout << *it << ' ';
  }
  cout << endl;
}

class Widget {
  int stuff[5];
  double d;
};

void ToProfile() {
  vector<Widget> v;
  //v.reserve(10000000);
  for (int i = 0; i < 10000000; ++i) v.push_back(Widget());
}
