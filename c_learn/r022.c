#include <stdio.h>

// 点数を入力、合計、最高の点数、最低の点数を表示する。

int main() {

  int i, tensu, goukei, heikin, max, min;

  goukei = 0;
  max = 0;
  min = 999;

  for ( i = 0; i < 10; i++ ) {
    printf("点数を入力してください");
    scanf("%d", &tensu);
    goukei += tensu;

    if ( max < tensu ) {
      max = tensu;
    }

    if ( tensu < min ) {
      min = tensu;
    }
  }
    heikin = goukei / 10;

    printf("合計の点数は　%d , 平均の点数は %d \n", goukei, heikin);
    printf("最高点数は　%d, 最低点数は %d \n", max, min);
}
