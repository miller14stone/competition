#include <stdio.h>

int souwa(int n)
{
  if ( n == 1){
    return 1;
  }
  else {
    return n + souwa(n-1);
  }
}

int main() {

  int suuji,kotae;
  printf("-----------総和を求める関数----------\n");
  printf("数字を入力してください----->");
  scanf("%d",&suuji);

  kotae = souwa(suuji);

  printf("1~ %d までの総和は%d　です　\n",suuji,kotae);
  printf("----------------------------------\n");
  return 0;
}
