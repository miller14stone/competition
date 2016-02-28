#include <stdio.h>
#include <string.h>


// 連結コンパイルし、実行ファイルを作成する
void henshu(int,char*);


int main()
{
  int no, lno, max;
  int bango,bango_t[50];
  char simei[15],simei_t[50][15];
  int kihonkyu,kihonkyu_t[50];
  char kihonkyux[15];

  FILE *fp;
  fp = fopen("shain_m2.txt","r");
  no = 0;
  while(fscanf(fp,"%d","%s","%d",&bango,simei,&kihonkyu)!= EOF){
    no++;
    bango_t[no] = bango;
    strcpy(simei_t[no],simei);
    kihonkyu_t[no] = kihonkyu;
  }
  fclose(fp);
  max = no;

  no = 1;
  lno = 1;
  while(no<=max){
    if(lno == 1){
        printf("\n      <<< 社員マスタ一覧 >>> \n");
        printf("        番号　氏 名       基本給\n");
    }
    printf("%4d", no);
    henshu(kihonkyu_t[no],kihonkyux);
    printf("%04d %-15s %11s\n",bango_t[no],simei_t[no],kihonkyux);

    if (lno >= 10 || no == max){
      printf("\n    確認したら何かキーを押してください。\n");
      getchar();
      lno = 0;
    }
    no++;
    lno++;
  }
  return 0;

}
