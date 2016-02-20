#include <stdio.h>

int kouyakusu(int x,int y){
  int amari;
  amari = x % y;
  printf("%5d ÷ %5d = %5d 余り %5d \n", x, y, x/y, amari );
  if ( amari == 0){
    return y;
  }
  else {
    return kouyakusu(y, amari);
  }
}

int main(){
  int suuji1, suuji2;

  printf("--------最大公約数を求める関数-------");
  printf("1つめの数字を入力してください----->");
  scanf("%d",&suuji1);
  printf("2つめの数字を入力してください----->");
  scanf("%d",&suuji2);
  kouyakusu(suuji1,suuji2);
  printf("----------------------------------");
}
