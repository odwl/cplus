#include <iostream>
#include <vector> 

using namespace std; 

static const int kValue = 10001;

void PrintVec(const vector<int> vec) {
  vector<int>::const_iterator pos;
  for(pos = vec.begin(); pos != vec.end(); ++pos) cout << *pos  << " ";
  cout << endl;
}

bool HasFactor(const int val, const vector<int> primes) { 
  bool isPrime = true;
  vector<int>::const_iterator p;
  for (p = primes.begin(); p != primes.end(); ++p) {
    if (val % *p == 0) {
      isPrime = false;
      break;
    }
  }
  return isPrime;
}

const int& Prime(const int& num) {
  vector<int> primes = vector<int>();
  for (int i = 2; primes.size() < num; ++i) {
    if (HasFactor(i, primes)) primes.push_back(i);
  }
  //PrintVec(primes);
 
  int* sol = new int(primes[primes.size() -1]);
  return *sol;
}

int main() {
  printf("EXO 7\n");
  cout << "Solution: " << Prime(kValue) << endl;
  return 0;
}
