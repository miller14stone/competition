#include <iostream>

// 偶数のフィボナッチ数
int main() {
  long n = 4000000; // 400万以上だから
  long fib1 = 1; // フィボナッチ数列の最初の項をあらかじめ代入
  long fib2 = 2; // フィボナッチ数列の2番目の項をあらかじめ代入
  long fib3 = 0; // これから追加していく新しい項のための変数
  int  v = 2;  // フィボナッチ数列の最初の2項のうち2がすでに偶数だから

  while ( fib3 < n ) {
    fib3 = fib1 + fib2;
    if (fib3 % 2 == 0) {
      v = v + fib3;
      printf( "\n" );
      printf( "%d\n", v );
    }
    fib1 = fib2;
    fib2 = fib3;
  }
}
