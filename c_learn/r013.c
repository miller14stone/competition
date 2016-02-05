#include <stdio.h>

// 区分と人数を入力する｡区分が１（子供）のときは料金を８００円、２（大人）のときは １５００円とし、それに人数を掛けて料金合計を求め表示する｡

int main() {

  int kubun,ninzu,goukei;

  printf("区分はどちらですか？　1:子供、2:大人");
  scanf("%d",&kubun);
  printf("人数は何人ですか？");
  scanf("%d",&ninzu);

  if ( kubun == 1 ) {
    goukei = ninzu * 800;
  } else if( kubun == 2 ) {
    goukei = ninzu * 1500;
  } else {
    printf("入力が間違っています。");
  };

  printf("料金金額は %d　円です", goukei);

}
