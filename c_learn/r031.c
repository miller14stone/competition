#include <stdio.h>
#include <string.h>

int main() {
  int i, kensu, goukei, uriage;
  int uriage_t[10];
  double ritu;

  char tanto[10], tanto_t[20][10];

  kensu = 0;
  goukei = 0;

  printf("担当者が end で終了\n");
  printf("%d 人目の担当者名",kensu+1);
  scanf("%s", tanto);
  printf("%sの売上を入力してください",tanto);
  scanf("%d", &uriage);

  while(strcmp(tanto,"end")){
    goukei += uriage;
    kensu++;
    uriage_t[kensu] = uriage;
    strcpy(tanto_t[kensu], tanto);

    printf("%d人目の担当者",kensu+1);
    scanf("%s", tanto);
    if (strcmp(tanto,"end")) {
              printf("%sの売上",tanto);
              scanf("%d",&uriage);
    }
  }
  kensu += 1;
  goukei += uriage;
  uriage_t[kensu] = goukei;
  strcpy(tanto_t[kensu],"合計");

  printf(" ___________________ \n");
  printf(" 担当者    売上     比率\n");
  printf(" ___________________ \n");

  for (i = 1; i <= kensu; i++) {
    ritu = (double)uriage_t[i] * 100.0 / (double)goukei;

    printf(" %-8s  %8d    %6.1f%%\n", tanto_t[i],uriage_t[i],ritu);
  }


  printf(" ======================= \n");
  return 0;
}
