#include <stdio.h>

void henshu(int, char *);


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
