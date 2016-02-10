#include <stdio.h>
#include <string.h>


int main() {

  int i, j, kensu, tensu;
  char simei[10];
  char simei_t[10][10];
  int tensu_t[10], juni_t[10];

  kensu = 0;

  printf("氏名を入力してください");
  scanf("%s", simei);
  printf("点数を入力してください");
  scanf("%d", &tensu);

  while(strcmp(simei, "end")) {
    kensu++;
    strcpy(simei_t[kensu],simei);
    tensu_t[kensu] = tensu;
    juni_t[kensu] = 1;

    printf("氏名を入力してください");
    scanf("%s", simei);

    if (strcmp(simei, "end")) {
      printf("点数を入力してください");
      scanf("%d", &tensu);
    }
  }

  for (i = 1; i <= kensu; i++) {
    for (j = 1; j <= kensu; j++) {
      if (tensu_t[i] < tensu_t[j]) {
        juni_t[i]++;
      }
    }
  }

  printf(" ------------------------- ");
  printf(" 氏名       点数       順位  ");
  printf(" - - - - - - - - - - - - - ");
  for ( i = 1; i <= kensu; i++) {
    printf(" %-10s         %d        %d", simei_t[i], tensu_t[i], juni_t[i]);
  }
  printf(" ========================= ");
  return 0;
}
