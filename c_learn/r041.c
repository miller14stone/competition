#include <stdio.h>
#include <string.h>


int main(){

  int i, shain_no;
  char shain_mei[11];

  int shain_no_t[]={1001,1002,1005,1010,1012,1013,1015,1020,1021,1022};
  char shain_mei_t[][10]={"鈴木","井上","山本","田川","田中","松田","木下","上野","岡本","吉永"};

  printf("---------社員検索--------\n");
  printf("社員番号を入力してください.--->");
  scanf("%d", &shain_no);
  strcpy(shain_mei,"");

  for (i = 0; shain_no_t[i]<9999; i++) {
        if (shain_no == shain_no_t[i]) {
          strcpy(shain_mei,shain_mei_t[i]);
        }
  }
  if (strcmp(shain_mei,"")==0) {
          printf("社員番号の登録がありません。 \n");
  } else {
          printf("社員名は%sです。\n",shain_mei);
  }
  printf("----------------------\n");
  return 0;
}
