#include <stdio.h>

// 国語、社会、理科の３科目の点数を入力し、３科目の合計と平均を表示する｡

int main()
{
  int kokugo, shakai, rika;
  int goukei,heikin;

  printf("国語の点数=");
  scanf("%d",&kokugo);
  printf("社会の点数=");
  scanf("%d",&shakai);
  printf("理科の点数=");
  scanf("%d",&rika);

  goukei = kokugo + shakai + rika;
  heikin = goukei / 3;

  printf("合計=%d　平均=%d ¥n",goukei,heikin);
  return 0;

}
