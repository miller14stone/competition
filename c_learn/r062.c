#include <stdio.h>
#include <string.h>

int main()
{
  int no;
  FILE *fp;
  char buff[50];

  printf("\n    <<<  社員マスタ一覧   >>> \n\n");
  printf("      番号　　氏名              基本給\n");
  fp = fopen("shain_m.txt", "r");
  no = 1;
  while(fgets(buff, sizeof(buff),fp) != NULL ){
    printf("    %4d  ", no);
    printf(buff);
    no++;
  }
  fclose(fp);
  return 0;

}
