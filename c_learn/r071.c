#include <stdio.h>

void touroku(int);

int main()
{
  int shurui;
  char kakunin;

  printf("\n    <<< 顧客マスタ登録 >>> \n\n");
  printf("      新規登録 = 1 、　追加登録 = 2 :");
  scanf("%d",&shurui);

  do {
    toroku(shurui);
    printf("  続けますか ? (y/n)     :");
    scanf("%c%*c", &kakunin);
    shurui = 2;
  } while(kakunin == 'y' || kakunin == 'Y');

  return 0;
}

void touroku(int shurui)
{
  // 構造化
  typedef struct {
    int bango;
    char namae[15];
    int zandaka;
  } KOKYAKU_M;

  char kakunin;
  FILE *fp;
  KOKYAKU_M krec;

  printf("\n    1 顧客番号 ( 半角数字4桁)  :"); scnaf("%d%c",&krec.bango);
  printf("      2 顧 客 名 (全角7文字)    :"); scanf("%s%*c",krec.namae);
  printf("      3 売掛残高 (半角数字8桁)   :"); scanf("%d%*c", &krec.zandaka);

  printf("\n  登録しますか？ (y/n)   :");
  scanf("%c%*c", &kakunin);
  if (kakunin == 'y' || kakunin == 'Y'){
      if (shurui == 1){
        fp = fopen("kokyaku_m.txt","w");
      } else {
        fp = fopen("kokyaku_m.txt","a");
      }
      fwrite(&krec,sizeof(KOKYAKU_M),1,fp); /* データ追加 */
      fclose(fp);
  }
}
