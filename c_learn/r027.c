#include <stdio.h>

// 目標貯金額と月々の貯金額を入力する｡何年何ヶ月で達成するかを表示する｡

int main() {

  int mokuhyou, chokin, goukei, kikan, nen, tuki;

  printf("目標金額");
  scanf("%d",&mokuhyou);
  printf("月々の貯金額");
  scanf("%d",&chokin);

  goukei = 0;
  kikan = 0;

  while(goukei < mokuhyou) {
    goukei = goukei + chokin;
    kikan = kikan + 1;
  }
  nen = kikan / 12;
  tuki = kikan % 12;

  printf("%d年 %dヶ月です",nen,tuki);
  return 0;
}
