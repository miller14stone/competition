#include <stdio.h>
#include <string.h>

//担当者名が"end"になる迄、担当者名と売上を入力する｡売上合計、平均、最も売上が多
//い担当者名とその売上、最も売上が低い担当者名とその売上を表示する｡

int main() {

  int kensu, goukei, uriage, heikin, max, min;
  char tanto[10],max_tanto[10],min_tanto[10];
  kensu = 0;
  goukei = 0;

  printf("担当者名がendで終了\n");
  printf("%d人目の担当者名", kensu+1);
  scanf("%s", tanto);
  printf("%s の売上", tanto);
  scanf("%d",&uriage);
  max = uriage;
  min = uriage;
  strcpy(max_tanto, tanto);
  strcpy(min_tanto, tanto);


  while ( strcmp(tanto,"end") ) {
    goukei += uriage;
    kensu++;
    if ( max < uriage ) {
      max = uriage;
      strcpy(max_tanto,tanto);
    }
    if ( min > uriage) {
      min = uriage;
      strcpy(min_tanto,tanto);


    printf("%d人目の担当者名", kensu+1);
    scanf("%s",tanto);
    if (strcmp(tanto,"end")){
        printf("%sの売上", tanto);
        scanf("%d",&uriage);
    }
  }
  }
  heikin = goukei / kensu;
  printf("_____________________\n");
  printf("合計は%d , 平均は%d", goukei, heikin);
  printf("売上最高担当は%s で金額は%d \n",max_tanto,max);
  printf("売上最低担当は%s で金額は%d \n",min_tanto,min);
  printf("_____________________\n");
  return 0;

}
