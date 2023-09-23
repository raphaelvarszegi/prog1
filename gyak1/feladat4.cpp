#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int i;
  double napihom, osszeg = 0;
  for (i = 1; i < 6; i++) {
    cout << "Kerem a(z) " << i << ". napi homersekletet: ";
    cin >> napihom;
    osszeg += napihom;
  }
  cout << "Az atlagos homerseklet: " << round(osszeg) / 5.0 << endl;
  return 0;
}
