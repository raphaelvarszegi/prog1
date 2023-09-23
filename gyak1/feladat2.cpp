#include <iostream>
using namespace std;

int main() {
  int ossz = 0, i, also, felso;
  cout << "also hatar: ";
  cin >> also;
  cout << "felso hatar: ";
  cin >> felso;
  for (i = also; i <= felso; i++) {
    ossz = ossz + i;
  }
  cout << "osszeg: " << ossz << endl;
}
