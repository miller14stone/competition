#include <stdio.h>
#include <string.h>

typedef struct { /* 伝票 */
 int bango;
 int kubun;
 int kingaku;
} DENPYO_D;

DENPYO_D drec;      /* 伝票　レコード */
DENPYO_D dtbl[51];  /* テーブル */
DENPYO_D wrec;      /* ワーク */

FILE *fpd1;         /* 入力用ファイルポインタ */
FILE *fpd2;         /* 出力用ファイルポインタ */

int n,j,no,max;
int bango;

void denpyo_input(void);
void denpyo_sort(void);
void denpyo_output(void);

int main()
{
    denpyo_input();
    denpyo_sort();
    denpyo_output();
    return 0;
}

void denpyo_input()
{
  printf("\n   <<< 伝票ソート >>>\n");
  fpd1 = fopen("denpyo_d.txt","r");
  no = 0;
  while(fread(&drec,sizeof(DENPYO_D),1,fpd1))  /*  入力ファイル→テーブル */
  {
    dtbl[no].bango = drec.bango;
    dtbl[no].kubun = drec.kubun;
    dtbl[no].kingaku = drec.kingaku;
    no++;
  }
  fclose(fpd1);
  max = no-1;
  printf("   入力件数 :   %d 件 \n",max+1);
}

void denpyo_sort(void)    /* 基本交換法によるSORT */
{
  for(n=max;n>0;n--) {                          /* nをmaxから1まで繰り返す */
      for(j=0;j<n;j++) {                        /* jを0からn-1まで繰り返す */
        if (dtbl[j].bango>dtbl[j+1].bango){
          wrec.bango = dtbl[j].bango;           /* j番目をワークへ */
          wrec.bango = dtbl[j].kubun;
          wrec.kingaku = dtbl[j].kingaku;

          dtbl[j].bango = dtbl[j+1].bango;      /* j+1番目j番目へ */
          dtbl[j].kubun = dtbl[j+1].kubun;
          dtbl[j].kingaku = dtbl[j+1].kingaku;

          dtbl[j+1].bango = wrec.bango;         /* ワークよりj+1番目へ */
          dtbl[j+1].kubun = wrec.kubun;
          dtbl[j+1].kingaku = wrec.kingaku;

        }
      }
  }
}

void denpyo_output(void)
{
  fpd2 = fopen("denpyo_ds.txt","w");
  for(no=0;no<=max;no++) {
    drec.bango = dtbl[no].bango;
    drec.kubun = dtbl[no].kubun;
    drec.kingaku = dtbl[no].kingaku;
    fwrite(&drec,sizeof(DENPYO_D),1.fpd2); /* データ出力 */
  }

  fclose(fpd2);
  printf("  出力件数: %d 件 \n",max+1);
  printf("  正常終了\n");
}
