#include <stdio.h>
#include <string.h>

void touroku(int);

int main() {
  int shurui;
  char kakunin;

  printf("\n    <<< 社員マスタ登録 >>>  \n\n");
  printf("      新規登録 = 1　、 追加登録 = 2   :");

  do {
        touroku(shurui);
        printf("        続けますか？  (y/n):  ");
        scanf("%c %*c", &kakunin);
        shurui = 2;
  } while(kakunin == 'y' || kakunin=='Y');

  return 0;

}


void touroku(int shurui)
{
  int bango;
  char namae[15];
  int kihonkyu;
  char kakunin;
  FILE *fp;

  printf("\n      1  社員番号 (半角数字4桁)  :");  scanf("%d%*c", &bango);
  printf("        2  氏    名 (全角7文字)   :");  scanf("%s%*c", namae);
  printf("        3  基 本 給 (半角数字8桁)  :");  scanf("%d%*c", &kihonkyu);

  printf("\n      登録しますか? (y/n):       ");  scanf("%c%*c", &kakunin);
  if (kakunin == 'y' || kakunin == 'Y'){
          if (shurui == 1){
                fp = fopen("shain_m.txt","w");
          } else {
                fp = fopen("shain_m.txt","a");
          }
          fprintf(fp,"%04d %-15s %08d\n", bango, namae, kihonkyu);
          fclose(fp);
  }
}
