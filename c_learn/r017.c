#include <stdio.h>

//値引き区分、単価、数量を入力する｡値引き区分が１のとき５％引き、２のとき10％引
//き、３のとき15％引き、それ以外は値引きなしとし、金額を算出し表示する｡

int main() {
  int kubun, tanka, suryo, ritu, kingaku;

  printf("あなたの値引き区分は何ですか? 1 or 2 or 3 =");
  scanf("%d",&kubun);
  printf("単価はいくらですか？");
  scanf("%d",&tanka);
  printf("数量はいくつですか？");
  scanf("%d",&suryo);

  switch (kubun) {
    case 1:
      ritu = 5;
      break;
    case 2:
      ritu = 10;
      break;
    case 3:
      ritu = 15;
      break;
    default:
      ritu = 0;
  }

  kingaku = tanka * suryo * (100 - ritu) / 100;

  printf("値引率は %d です", ritu);
  printf("金額は %d です", kingaku);
}
