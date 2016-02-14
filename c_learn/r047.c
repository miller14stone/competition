#include <stdio.h>

int main() {

  int i, j, k, mojisu;

  char in_mojiretu[81],out_mojiretu[81];
  char mojiretu[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

  printf("--------文字の暗号化--------\n");
  printf("英文を入力してください。");
  scanf("%s", in_mojiretu);
  printf("スライドする文字数を入力してください--->");
  scanf("%d",&mojisu);

  // 文字数分eachを回す
  for ( i = 0; in_mojiretu[i] != '\0'; i++ ){
    out_mojiretu[i] = in_mojiretu[i];
    for( j = 0; j<51; j++) {
      if(in_mojiretu[i] == mojiretu[j]){
        k = j + mojisu;
        if (k >= 52){
          k -= 52;
        }
        // ずらす
        out_mojiretu[i] = mojiretu[k];
        break;
      }
    }
  }
  out_mojiretu[i] = '\n';
  printf("--------暗号化後の文字列--------\n");
  printf("\n");
  printf("%s\n", out_mojiretu);
  printf("\n");
  printf("-----------------------------\n");
  return 0;

}
