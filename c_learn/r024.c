#include <stdio.h>

// 点数が999になる迄、点数を入力し、合計、平均、最高点数、最低点数を表示する｡

int main() {

  int tensu, kensu, goukei, heikin, max, min;

  kensu = 0;
  goukei = 0;
  max = 0;
  min = 0;

  printf("%d 人目の点数", kensu+1);
  scanf("%d", &tensu);

  while(tensu != 999 ) {
    scanf("%d", &tensu);
    goukei += tensu;
    kensu++;
    if ( max < tensu ) {
      max = tensu;
    }
    if ( tensu < min ) {
      min = tensu;
    }

    printf("%d 人目の点数", kensu+1);
    scanf("%d", &tensu);
  }

  heikin = goukei / kensu;

  printf("合計は %d , 平均は %d です \n", goukei, heikin);
  printf("最高点数は　%d , 最低点数は %d", max, min);
  return 0;
}
