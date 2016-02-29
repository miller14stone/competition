#include <stdio.h>
#include <string.h>

typedef struct {  /* 顧客マスタ*/
    int bango;
    char namae[15];
    int zandaka;
} KOKYAKU_M;

typedef struct { /* 伝票 */
  int bango;
  int kubun;
  int kingaku;
} DENPYO_D;

  KOKYAKU_M krec;     /* 顧客マスタ レコード */
  KOKYAKU_M ktbl[51]; /* テーブル */
  DENPYO_D drec;      /* 伝票 レコード */

  FILE *fpm;          /* 顧客マスタ用ポインタ */
  FILE *fpd;          /* 伝票用ポインタ*/

  int no, max, shurui, bango;
  char kakunin;

void touroku(void);

int main()
{
  printf("\n   <<< 売上入金データ入力 >>>   \n");
  printf("   新規登録 = 1,  追加登録 = 2  : n ");
  scanf("%d%*c", &shurui);

  fpm = fopen("kokyaku_m.txt","r");
  no = 0;
  /* ファイルの読み込み */
  while(fread(&krec,sizeof(KOKYAKU_M),1,fpm))
  {
    ktbl[no].bango = krec.bango;
    strcpy(ktbl[no].namae, krec.namae);
    ktbl[no].zandaka = krec.zandaka;
    no++;
  }
  fclose(fpm);
  max = no;

  do {
        touroku();
        printf("     続けますか？ (y/n)......... ?");
        scanf("%c%*c", &kakunin);

  }while(kakunin == 'y' || kakunin == 'Y');
  return 0;
}


void touroku() {

  printf("1 顧客番号(半角数字4桁) : ");
  scanf("%d", &bango);
  printf("2 顧客名(全角7文字) :");

  no = 0;
  while(bango != ktbl[no].bango && no < max)
  {
    no++;
  }

  if ( ktbl[no].bango == bango)
  {
    printf("%s\n", ktbl[no].namae);
    printf("   3  伝票区分 ( 売上 = 1, 入金 = 2) : "); scanf("%d%*c",&drec.kubun);
    printf("   4  金   額 ( 半角数字8桁)         :");  scanf("%d%*c",&drec.kingaku);
    printf("\n        OK ? (y/n).............  :"); scanf("%s%*c", &kakunin);
    drec.bango = bango;
    if (kakunin == 'y' || kakunin == 'y'){
      if ( shurui == 1) {
        fpd = fopen("denpyo_d.txt", "w");
        shurui = 2;
      } else {
        fpd = fopen("denpyo_d.txt","a");
      }
      fwrite(&drec,sizeof(DENPYO_D), 1, fpd); /* データ追加 */
      fclose(fpd);
    }
  } else {
    printf("\n     顧客マスタ未登録。　確認 OK? (y)  :");
    scanf("%c%*c",&kakunin);
  }
}
