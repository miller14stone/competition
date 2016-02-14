#include <stdio.h>

int main(){

  int i, kingaku, amari;
  int kinshu_t[9] = {10000,5000,1000,500,100,50,10,5,1};
  int maisu_t[9] = {0,0,0,0,0,0,0,0,0};

  printf("----------金種表計算----------");
  printf("金額を入力してください。--->");
  scanf("%d", &kingaku);

  amari = kingaku;

  for(i=0; i < 9; i++){
    maisu_t[i] = amari / kinshu_t[i];
    amari = amari % kinshu_t[i];
  }
  for (i=0; i < 9; i++){
    printf("%6d 円: %5d 枚:\n",kinshu_t[i],maisu_t[i]);
  }
  printf("----------------------------");;
  return 0;
}
