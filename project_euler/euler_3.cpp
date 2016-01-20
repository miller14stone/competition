#include <iostream>


// 13195 の素因数は 5, 7, 13, 29 である.
//
// 600851475143 の素因数のうち最大のものを求めよ.

int main() {

  long long soin = 600851475143;
  long long k = 2;
  long long king = 0;
  while (1 < soin ) {
    if(soin % k == 0) {
      // 最大値が最終的に残る
      king = k;
      soin = soin / k;
    } else {
      k += 1;
    }
  }
  printf("\n");
  printf("%lld\n", k );
}
