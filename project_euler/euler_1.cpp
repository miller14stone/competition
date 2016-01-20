#include <iostream>
int i;
int v;

int main() {
  for(i = 0; i < 1000; i++){
    if(i % 3 == 0){
      v += i;
    } else if(i % 5 == 0) {
      v += i;
    }
  }
  printf("\n");
  printf("%d\n", v);
}
