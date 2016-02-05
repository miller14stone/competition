#include <stdio.h>

int main() {

  int tensu1,tensu2;
  char namae1,namae2;

  printf("一人目の名前を教えてください");
  scanf("%s",&namae1);
  printf("一人目の点数を教えてください");
  scanf("%d",&tensu1);

  printf("二人目の名前を教えてください");
  scanf("%s",&namae2);
  printf("二人目の点数を教えてください");
  scanf("%d",&tensu2);

  if ( tensu1 > tensu2 ) {
    printf("%d点の%sさんの方が大きい",tensu1,namae1);
  } else if ( tensu1 < tensu2 ) {
    printf("%d点の%sさんの方が大きい",tensu2,namae2);
  } else {
    printf("比較に失敗しました");
  }

}
