#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  int i;
  char betu;
  ofstream fw("kodtabla.txt");
  if (fw.is_open()) {
    for (i = 0; i <= 255; i++) {
      betu = i;
      cout << i << " = " << betu << endl;
    }
    fw.close();
  } else {
    cout << "Nem sikerult megnyitni a fajlt!" << endl;
  }
}
