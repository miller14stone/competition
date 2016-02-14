#include <stdio.h>

int main(){

  int i,j;
  char in_mojiretu[81],out_mojiretu[81];
  char komoji[] = "abcdefghijklmnopqrstuvwxyz";
  char oomoji[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  printf("-------英字の変換-------\n");
  printf("英文(小文字で) 入力してください。\n");
  scanf("%s",in_mojiretu);

  for (i = 0; in_mojiretu[i] != '\0'; i++) {
    out_mojiretu[i] = in_mojiretu[i];
    for ( j=0; j < 26; j++){
      if (in_mojiretu[i] == komoji[j]) {
        out_mojiretu[i] = oomoji[j];
        break;
      }
    }
  }
  out_mojiretu[i] = '\0';

  printf("--------------変換後の文字列--------------\n");
  printf("¥n");
  printf("%s¥n",out_mojiretu);
  printf("¥n");
  printf("--------------------------------------\n");
  return 0;


}
