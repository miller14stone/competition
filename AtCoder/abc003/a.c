#include <stdio.h>

int main(){
  int i, x, y=0;
  scanf("%d",&x);
  for (i=1; i<x; i++){
    y = y + (10000*i);
  }
  printf("%d\n",y/x);
  return 0;
}
