#include <stdio.h>

// 点数を１０件入力し、その合計を表示する｡

int main() {

  int i,tensu, goukei, heikin;
  goukei = 0;
  printf("10件の点数の合計と平均を求めます")
  for (i = 0; i < 10; i++){
    printf("点数を入力");
    scanf("%d", &tensu);
    goukei += tensu;
  }

  heikin = goukei / 10;

  printf("合計は%d , 平均は%d ¥n", goukei, heikin);
  return 0;
}
