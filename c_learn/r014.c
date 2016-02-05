#include <stdio.h>



int main() {

  int tensu;

  printf("あなたの点数は何点ですか？");
  scanf("%d",&tensu);

  if ( tensu > 80 ) {
    printf("あなたの評価は Aランクです");
  } else if ( tensu < 80 && tensu > 60 ) {
    printf("あなたの評価は Bランクです");
  } else if ( tensu < 60 ) {
    printf("あなたの評価は Cランクです");
  } else {
    printf("入力が間違っています");
  }

}
