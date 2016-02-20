#include <stdio.h>

int main(void)
{
  int a;

  scanf("%d",&a);
  if ( a < 100){
            printf("%02d\n", 00);
  } else if (  100 <= a && a <= 5000 ) {
            printf("%02d\n", a/100);
  } else if ( 6000 <= a && a <= 30000 ) {
            printf("%02d\n", a/1000 + 50);
  } else if ( 35000 <= a && a <= 70000 ) {
            printf("%02d\n",(a/1000 - 30) / 5 + 80);
  } else if ( 70000 < a ) {
            printf("%02d\n",89);
  }
  return 0;
}
