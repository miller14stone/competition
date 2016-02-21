#include <stdio.h>
#include <string.h>

int main()
{
  int no;
  int bango;
  char simei[15];
  int kihonkyu;

  FILE *fp;

  printf("\n      <<< 社員マスタ一覧 >>>\n\n");
  printf("      番号　氏名           基本給\n");
  fp = fopen("shain_m.txt","r");
  no = 1;
  while(fscanf(fp, "%d %s %d","&bango,simei,&kihonkyu")!= EOF){
    printf("  %4d  ",no);
    printf("%04d %-15s %8d\n", bango, simei, kihonkyu);
    no++;
  }
  fclose(fp);
  printf("\n    確認したら何かキーを押してください。 \n");
  getchar();
  return 0;
}
