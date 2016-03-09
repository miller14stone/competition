#include <stdio.h>


void reverse(char *str) {
  char* end = str;
  char tmp;
  if (str) {
    while (*end) {/* 文字列の終端を探す */
      ++end;
    }
    --end; /* null文字から1文字戻る */

    /* 2つのポインタが中央で出会うまで、先頭からスタートしたポインタと
     * 終点からスタートしたポンタの文字を交換する */
    while (str < end){
      tmp = *str;
      *str++ = *end;
      *end-- = tmp;
    }
  }
}

int main(){
  char x;
  printf("文字列を入力してください");
  scanf("%s",&x);
  return reverse(&x);
}
