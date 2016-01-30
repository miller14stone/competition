#include <iostream>

// 100*100 = 10000
// 999*999 = 998001

int main() {
  int main = 100;
  int max = 999;
  int p;
  for (int i = 100; i < 1000; i++ ) { // for文で回す最大
    for (int j = 999; j >= i; j--) {
      p = i * j;
    }
  }
  printf("%d\n", p );
}
