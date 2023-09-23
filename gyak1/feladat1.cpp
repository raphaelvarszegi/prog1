#include <iostream>
using namespace std;

int main() {
  int ossz = 0, i;
  for (i = 1; i <= 100; i++) {
    ossz = ossz + i;
  }
  cout << "1-tol 100-ig osszeadva: " << ossz << endl;
  return 0;
}
