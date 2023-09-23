#include <iostream>
using namespace std;
int main() {
  int i, szam;
  double fakt = 1;
  cout << "Adj meg egy szamot: ";
  cin >> szam;
  for (i = 2; i <= szam; i++) {
    fakt = fakt * i;
  }
  cout << "A szam faktorialisa: " << fakt << endl;
  return 0;
}
