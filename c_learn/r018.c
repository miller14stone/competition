#include <stdio.h>

//秒数で表される時間を入力し、時間、分、秒に変換し表示する｡

int main () {
  int byou, h, m, s;
  printf("秒速");
  scanf("%d", &byou);

  m = byou / 60;
  s = byou % 60;
  h = m / 60;
  m = m % 60;

  printf("%d 秒 = %d 時間 %d 分 %d 秒 ", byou, h, m, s);
  return 0;
}
