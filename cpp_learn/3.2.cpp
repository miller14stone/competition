#include <iostream>
#include <fstream>
using namespace std;

// n = 10とすることでデフォルト値を設定する
void print( int n = 10) {
  cout << n << endl;
}

int main() {
  print();
  print(100);
}
