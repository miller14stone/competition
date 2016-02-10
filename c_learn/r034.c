#include <stdio.h>
#include <string.h>

int main() {
  int i, j, kensu, uriage;
  char eigyousho[7];
  char eigyousho_t[10][15];
  int uriage_t[10];
  int juni_t[10];

  kensu = 0;

  printf("営業所を入力してください");
  scanf("%s", eigyousho);
  printf("売上を入力してください");
  scanf("%d", &uriage);

  while(strcmp(eigyousho,"end")) {
    kensu++;
    strcpy(eigyousho_t[kensu],eigyousho);
    uriage_t[kensu] = uriage;
    juni_t[kensu] = 1;

    printf("営業所を入力してください");
    scanf("%s", eigyousho);
    if(strcmp(eigyousho,"end")) {
      printf("売上を入力してください");
      scanf("%d", &uriage);
    }
  }

  for (i = 1; i <= kensu; i++) {
    for (j = 1; j <= kensu; i++) {
      if(uriage_t[i] < uriage_t[j]) {
        juni_t[i]++;
      }
    }
  }

  printf(" _________________________ \n");
  printf("  営業所  売上金額      順位  \n");
  printf(" - - - - - - - - - - - - - \n");
  for ( i=1; i < kensu; i++ ) {
    printf(" %-10s    %8d     %d\n",eigyousho_t[i], uriage_t[i], juni_t[i]);
  }
  printf(" ====== ====== ===== ====== =====");
  return 0;
}
