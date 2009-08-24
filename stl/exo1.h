
#include <iostream>
#include <algorithm>

using namespace std;

template <typename T1, typename T2>
void Copy(const T1& cont1, T2* cont2) {
  copy(cont1.begin(), cont1.end(), cont2->back_inserter());
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
