#include <stdio.h>
#include <string.h>
#include "henshu.h"

typedef struct {      /* 顧客マスタ */
  int bango;
  char name[15];
  int zandaka;
} KOKYAKU_M;

KOKYAKU_M krec;       /* 顧客マスタ　レコード */
KOKYAKU_M ktbl[51];   /* テーブル */


typedef struct {      /* 伝票 */
  int bango;
  int kubun;
  int kingaku;
} DENPYO_D;

DENPYO_D drec;        /* 顧客マスタ用ポインタ */
DENPYO_D dtbl[51];    /* 伝票用ポインタ */

FILE *fpm;            /* 顧客マスタ用ポインタ */
FILE *fpd;            /* 伝票用ポインタ */

int m_no, m_max;
int d_no, d_max;
int lno, n_zandaka;
char uriagex, nyukinx, zandakax;

void master_input(void);
void denpyo_input(void);
void zandaka_hyouji(void);
void title_hyouji(void);
void footer__hyouji(void);


int main()
{
  master_input();
  denpyo_input();
  zandaka_hyouji();
  return 0;
}

void master_input(void)   /* 入力ファイル　→　テーブル */
{
  fpm = fopen("kokyaku_s.txt","r");
  m_no = 0;
  while(fread(&krec, sizeof(KOKYAKU_M),1,fp,))
  {
    ktbl[m_no].bango = krec.bango;
    strcpy(ktbl[m_no].namae,krec.namae);
    ktbl[m_no].zandaka = krec.zandaka;
    m_no++;
  }
  fclose(fpm);
  m_max = m_no - 1;
}


void denpyo_input(void)     /* 入力ファイル → テーブル  */
{
  fpd = fopen("denpyo_ds.txt","r");
  d_no = 0;
  while(fread(&drec,sizeof(DENPYO_D),1,fpd))
  {
        dtbl[d_no].bango = drec.bango;
        dtbl[d_no].kubun = drec.kubun;
        dtbl[d_no].kingaku = drec.kingaku;
        d_no++;
  }
  fclose(fpd);
  d_max = d_no - 1;
}

void zandaka_hyouji(void)   /* 残高表示 */
{
  title_hyouji();
  d_no = 0;
  for(m_no = 0; m_no<=m_max;m_no++){
    printf(" -------------------------------------\n");
    printf("      %4d     ", m_no+1);
    henshu(ktbl[m_no].zandaka,zandakax);
    n_zandaka = ktbl[m_no].zandaka;
    printf("%04d %-15s  %32s\n",ktbl[m_no].bango,ktbl[m_no].namae,zandakax);
    while(ktbl[m_no].bango == dtbl[d_no].bango && d_no <= d_max) {
      if(dtbl[d_no].kubun == 1) {
        henshu(dtbl[d_no].kingaku,uriagex);
        n_zandaka = n_zandakax + dtbl[d_no].kingaku;
        henshu(n_zandaka,zandakax);
        printf("%42s     %11s\n",nyukinx,zandakax);
      }
      d_no++;
    }
    if(m_no == m_max){
      footer__hyouji();
    }
  }
}

void title_hyouji(void)       /* タイトル表示 */
{
  printf("\n      <<< 顧客マスタ残高一覧 >>>\n");
  printf("      番号 顧客名    売上    入金   売掛金\n");
}

void footer__hyouji(void)    /* フッター表示 */
{
  printf("    -----------------------------\n");
  printf("\n  マスタ入力件数 = %d 件、伝票件数 = %d 件\n",max+1, d_max+1);
  printf("     終わりです。確認したら何かキーを押してください。 \n");
  getchar();

}
