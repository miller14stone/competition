#include <stdio.h>

int main() {

  int i, jougen, kagen, kensu;
  int shain_no_t[] = {1001,1002,1005,1010,1012,1013,1015,1020,1021,1022,9999};
  char shain_mei_t[][10] = {"鈴木","井上","山本","田川","田中","松田","木下","上野","岡本","吉永"};
  int nenrei_t[] = {53,42,39,28,30,25,24,31,20,18};


  printf("--------社員検索--------\n");
  printf("上限を入力してください----->");
  scanf("%d", &jougen);
  printf("加減を入力してください----->");
  scanf("%d", &kagen);
  kensu = 0;

  for(i=0; shain_no_t[i] < 9999; i++) {
    if (nenrei_t[i] <= jougen && nenrei_t[i] >= kagen) {
          printf("対象者　社員番号= %d 社員名= %s 年齢= %d \n",
                  shain_no_t[i],shain_mei_t[i],nenrei_t[i]);
          kensu++;
    }
  }

  printf("以上%d名です。\n",kensu);
  printf("--------------------------------\n");
  return 0;

}
