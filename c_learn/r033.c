#include <stdio.h>
#include <string.h>

int main() {
  int i, kensu, goukei, tensu, heikin;
  char simei[10], bikou[7];
  char simei_t[10][10];
  int  tensu_t[10];

  kensu = 0;
  goukei = 0;

  printf("氏名を入力してください");
  scanf("%s", simei);
  printf("点数を入力してください");
  scanf("%d", &tensu);

  while (strcmp(simei,"end")) {
    goukei += tensu;
    kensu++;
    strcpy(simei_t[kensu],simei);
    tensu_t[kensu] = tensu;

    printf("氏名を入力してください");
    scanf("%s", simei);
    if (strcmp(simei,"end")) {
      printf("点数を入力してください");
      scanf("%d", &tensu);
    }
  }

  heikin = goukei / kensu;
  kensu++;
  strcpy(simei_t[kensu],"平 均");
  tensu_t[kensu] = heikin;

  strcpy(simei_t[kensu], "平均");

  printf(" _________________________\n ");
  printf(" 氏名     点数        備考　\n");
  printf(" _________________________\n ");

  for (i = 1; i <= kensu; i++ ) {
    strcpy(bikou, "");
    if (heikin - tensu_t[i] >= 20 ) {
              strcpy(bikou, "***");
    }
    else if (heikin - tensu_t[i] > 0) {
              strcpy(bikou, "**");
    }
    else if (heikin - tensu_t[i] > 0) {
              strcpy(bikou, "*");
    }
    printf("   %-10s  %4d  %s\n",simei_t[i],tensu_t[i],bikou);
  }

  printf(" ========================= \n");

  return 0;

}
