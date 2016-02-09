#include <stdio.h>
#include <string.h>

int main() {

  int i, kensu, goukei, bucode, keihi, anbun;
  int bucode_t[7], keihi_t[7];
  double ritu;
  char buname_t[7][10];

  kensu = 0;
  goukei = 0;

  printf("部門コードを入力してください");
  scanf("%d", &bucode);
  printf("経費を入力してください");
  scanf("%d", &keihi);

  while(bucode != 9) {
    goukei += keihi;
    kensu++;
    bucode_t[kensu] = bucode;
    keihi_t[kensu] = keihi;

    switch(bucode) {
      case 1:
            strcpy(buname_t[kensu],"総務部");
            break;
      case 2:
            strcpy(buname_t[kensu],"人事部");
            break;
      case 3:
            strcpy(buname_t[kensu],"企画部");
            break;
      case 4:
            strcpy(buname_t[kensu],"営業部");
            break;
      case 5:
            strcpy(buname_t[kensu],"製造部");
            break;
    }

    printf("部門コードを入力してください");
    scanf("%d", &bucode);
    if (bucode != 9) {
      printf("経費を入力してください");
      scanf("%d", &keihi);
    }
  }

  kensu += 1;
  keihi_t[kensu] = goukei;
  bucode_t[kensu] = 9;
  strcpy(buname_t[kensu], "合計");

  printf(" _______________________________ \n");
  printf("  コード 部門名   経費　比率　按分金額");
  printf(" _______________________________ \n");

  for (i = 1; i<=kensu;i++) {
    ritu = (double)keihi_t[i] * 100.0 / (double)goukei;
    anbun = 4000 * ritu / 100;
    printf("%d     %s   %d   %6.1f%%    %8d\n, bucode_t[i], buname_t[i], keihi_t[i], ritu, anbun");
  }
  printf(" ====================== \n");
  return 0;
}
