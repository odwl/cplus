
#include <iostream>
#include <vector>

using namespace std;

//int NUM = 13195;
long NUM = 600851475143;
//long NUM =  716151937;
//long NUM = 6857;

void TestVector() {
  vector<int> vec;
  for (int i = 1; i <=6; ++i) vec.push_back(i);

  for (int i = 0; i < 6; ++i) cout << vec[i] << " ";
  cout << endl;

  vector<int>::const_iterator pos;
  for(pos = vec.begin(); pos != vec.end(); ++pos) cout << *pos  << " ";
}

vector<long> Factors(long num) {
  vector<long> factors;
  for (long i = 2; i < num/2+1; ++i) {
    if (num % i == 0) {
      factors.push_back(i);
      cout << "PLIC " << i << endl;
    }
  }
  return factors;
}

long LargestDivisor2(long num) {
  cout << num << endl;
  for (long i = 2; i < num / 2 + 1; ++i) {
    if (num % i == 0) {
      cout << num << " PLOC " << i << endl;
      LargestDivisor2(num / i);
      break;
    }
    else if (i == 2) cout << "POUET " << num << endl;
  }
  return num;
}

void LargestDivisor(long num) {
  cout << num << endl;
  for (long i = num/2 + 1; i >= 2; --i) {
    if (num % i == 0) {
      cout << num << " PLOC " << i << endl;
      LargestDivisor(i);
      break;
    }
    else if (i == 2) cout << "POUET " << num << endl;
  }
}

void PrintVec(const vector<long> vec) {
  vector<long>::const_iterator pos;
  for(pos = vec.begin(); pos != vec.end(); ++pos) cout << *pos  << " ";
  cout << endl;
}

int main() {
  cout << "EXO 3" << endl;
  //Factors(NUM);
  cout << "SOL " << LargestDivisor2(NUM);
  return 0;
}
