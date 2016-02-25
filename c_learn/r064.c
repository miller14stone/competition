#include <stdio.h>

void henshu(int ,char *);


int main()
{
  int suuji;
  char moji[13];
  printf("数字(最大 9桁)を入力してください------>");
  scanf("%d", &suuji);
  henshu(suuji, moji);
  printf("編集された数字----------------------> %s \n",moji);

  return 0;
}


/* ---------- 数字に3桁ごとにカンマを挿入する関数*/
void henshu(int suuji, char *moji)
{
    int i,j,k,suuji0,suuji1;
    char suuji_t[]="0123456789";
    char mojiretu[13]="           ";

    if (suuji < 0) {  /* 数字がマイナスは正に */
      suuji0 = 0 - suuji;
    } else {
      suuji0 = suuji;
    }

    for (i=0,j=0 ;i < 13 && suuji0 != 0;i++,j++){
          suuji1 = suuji0 % 10;             /* 右端１桁を取り出す */
          suuji0 = suuji0 / 10;             /* 右端１桁を取り出した残り桁*/
          mojiretu[i]=suuji_t[suuji1];      /* １桁ごと　数字->文字へ */
          if ((i+1)%3 == 0 && suuji0 != 0) {/* ３桁ごとに */
                    j++;
                    mojiretu[j]=',';        /*　カンマ挿入 */
          }
    }
    if (suuji < 0){       /* 数字がマイナスのとき */
      mojiretu[j] = '-';  /* マイナス符号をつける */
      j++;
    }
    mojiretu[j] = '\0';
    k = j - 1;
    for ( i = 0; mojiretu[i] != '\0' ; i++) {
        j = k - i;
        *(moji+j) = mojiretu[i];  /* 文字列を戻し値へ */
  }
  *(moji+i)='\0';
}
