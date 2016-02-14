#include <stdio.h>

int main() {

  int i, j, k, mojisu;

  char in_mojiretu[81],out_mojiretu[81];
  char *p_in,*p_out;
  char mojiretu[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char *p_moji;

  printf("--------文字の暗号化--------\n");
  printf("英文を入力してください。");
  scanf("%s", in_mojiretu);
  printf("スライドする文字数を入力してください--->");
  scanf("%d",&mojisu);

  p_in = in_mojiretu;
  p_out = out_mojiretu;
  p_moji = mojiretu;

  for (i=0;*(p_in + i) != '\0'; i++){
    *(p_out + i) =*(p_in + i);
    for( j = 0; j<52;j++){
      if(*(p_in + i)==*(p_moji + j)){
        k = j + mojisu;
        if ( k >= 52 ){
          k -= 52;
        }
        *(p_out + i) = *(p_moji + k);
        break;
      }
    }
  }
  *(p_out + i)='\0';
  printf("--------暗号化後の文字列--------\n");
  printf("\n");
  printf("%s\n", out_mojiretu);
  printf("\n");
  printf("-----------------------------\n");
  return 0;

}
