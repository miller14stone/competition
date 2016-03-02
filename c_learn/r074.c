#include <stdio.h>
#include <string.h>

typedef struct {  /* 顧客マスタ */
  int bango;
  char namae[16];
  int zandaka;
} KOKYAKU_M;

KOKYAKU_M krec;   /* 顧客マスタ レコード */
KOKYAKU_M ktbl[51]; /* テーブル */
KOKYAKU_M wrec;     /* ワーク */

FILE *fpm1; /* 入力用ファイルポインタ */
FILE *fpm2; /* 入力用ファイルポインタ */

int n, j;
int no, max;
int bango;

void master_input(void);
void master_sort(void);
void master_output(void);

int main()
{
  master_input();
  master_sort();
  master_output();
  return 0;
}

void master_input(void)
{
  printf("\n    <<< 顧客マスタソート >>>");
  fpm1 = fopen("kokyaku_m.txt","r");
  while(fread(&krec,sizeof(KOKYAKU_M),1,fpm1)) /* 入力ファイル→テーブル */
  {
    ktbl[no].bango = krec.bango;
    strcpy(ktbl[no].namae,krec.namae);
    ktbl[no].zandaka = krec.zandaka;
    no++
  }
  fclose(fpm1);
  max = no-1;
  printf("     入力件数 :   %d 件\n", max+1);
}

void master_sort(void)                      /* 基本交換法によるSORT */
{
  for(n=max;n>0;n--){
    for(j=0;j<n;j++){                       /* nをmaxから1まで繰り返す */
      if(ktbl[j].bango>ktbl[j+1].bango){    /* jを0からn-1まで繰り返す */

        wrec.bango = ktbl[j].bango;         /* j+1番目をj番目へ */
        strcpy(wrec.name,ktbl[j].namae);
        ktbl[j].zandaka = ktbl[j+1].zandaka;

        ktbl[j+1].bango = wrec.bango;       /* ワークよりj+1番目へ */
        strcpy(ktbl[j+1].namae,wrec.namae);
        ktbl[j+1].zandaka = wrec.zandaka;
      }
    }
  }
}

void master_output(void)
{
  fpm2 = fopen("kokyaku_s.txt","w");
  for(no=0;no<=max;no++){
    krec.bango = ktbl[no].bango;
    strcpy(krec.namae,ktbl[no].namae);
    krec.zandaka = ktbl[no].zandaka;
    fwrite(&krec,sizeof(KOKYAKU_M),1,fpm2); /* データ出力 */
  }
  fclose(fpm2);
  printf("  出力件数  : %d  件\n",max+1);
  printf("  正常終了\n");
}
