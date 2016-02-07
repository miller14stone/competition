#include <stdio.h>

// 元金、利率、期間を入力し、元利合計の計算を行い表示する｡

int main() {

  int i, gankin, ritu, kikan, goukei;

  printf("元金を入力してください");
  scanf("%d",&gankin);
  printf("利率を入力してください");
  scanf("%d",&ritu);
  printf("期間を入力してください");
  scanf("%d",&kikan);

  for(i = 0; i < kikan; i++ ) {
    goukei = goukei * (100+ritu)/100;
  }

  printf("元利合計 %d 円\n",goukei);
  return 0;
}
