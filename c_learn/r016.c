#include <stdio.h>

// 料金区分と人数を入力する｡料金区分が１のとき料金を800円、２のとき1000円、３
// のとき1500円とし、それに人数を掛けて、金額を算出する。料金と金額を表示する｡


int main() {
  int kubun, ninzu, ryokin, kingaku;

  printf("料金区分は何ですか？ 1 or 2 or 3");
  scanf("%d",&kubun);
  printf("人数は何人ですか?");
  scanf("%d",&ninzu);

  switch (kubun) {
    case 1:
      ryokin = 800;
      break;
    case 2:
      ryokin = 1000;
      break;
    case 3:
      ryokin = 1500;
      break;
  }

  kingaku = ninzu * ryokin;

  printf("あなたの料金は %d 円です", ryokin);
  printf("あなたの金額は %d 円です", kingaku);

}
