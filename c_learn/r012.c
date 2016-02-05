#include <stdio.h>

// 単価、数量を入力し、金額と消費税込み金額を計算し表示する｡

int main() {

  int tanka,suryo,kingaku,zeikomi;

  printf("単価=");
  scanf("%d",&tanka);
  printf("数量=");
  scanf("%d",&suryo);

  kingaku = tanka * suryo;
  zeikomi = kingaku * 105 / 100;

  printf("税込金額= %d 円", zeikomi);
  return 0;
}
