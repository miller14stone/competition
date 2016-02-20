#include <stdio.h>

int kaijo(int n)
{
  if ( n == 0){
    return 1;
  }
  else {
    return n * kaijo(n-1);
  }
}

int main() {

  int suuji,kotae;
  printf("-----------階乗を求める関数----------\n");
  printf("数字を入力してください----->");
  scanf("%d",&suuji);

  kotae = kaijo(suuji);

  printf("%d の階乗は%d　です　\n",suuji,kotae);
  printf("----------------------------------\n");
  return 0;
}
