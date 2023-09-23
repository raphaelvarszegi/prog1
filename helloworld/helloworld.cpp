#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v = {1, 2, 3, 4, 5};

  for (int i = 0; i < 10; i++) {
    cout << "Hello world!" << endl;
  }

  for (int i : v) {
    cout << i << endl;
  }

  return 0;
}
