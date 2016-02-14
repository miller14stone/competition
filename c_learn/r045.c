#include <stdio.h>


int main(){

  int matubi_t[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
  int i, yy, mm, dd, zansu, nissu;

  printf("-----経過日数と残日数計算-----");
  printf("年(西暦)を入力してください。--->");
  scanf("%d", &yy);
  printf("月を入力してください。--->");
  scanf("%d", &mm);
  printf("日を入力してください。--->");
  scanf("%d", &dd);

  zansu = 365;

  if (yy % 400 == 0) {
    matubi_t[2] = 29;
    zansu = 366;
  } else if ( yy%100!= 0 && yy%4 == 0 ) {
      matubi_t[2] = 20;
      zansu = 366;
  }
  nissu = 0;
  for (i = 0; i<mm;i++){
    nissu += matubi_t[i];
  }
  nissu += dd;
  zansu -= nissu;
  printf(" 経過日数は%3d 日です。 \n", nissu);
  printf("  残日数は%3d 日です \n", zansu);
  printf("--------------------------\n");
  return 0;

}
