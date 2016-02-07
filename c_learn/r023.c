#include <stdio.h>
#include <string.h>
// 名前､身長を５人分入力し、最も高い人の名前と身長を表示する｡

int main() {

  int sincho, max_sincho;
  char namae[10], max_namae[10];

  max_sincho = 0;

  for( i = 1; i < 6; i++ ) {

    printf("名前");
    scanf("%s", &namae);
    printf("身長");
    scanf("%d", &sincho);

    if ( sincho > max_sincho) {
        max_sincho = sincho;
        strcpy(max_name,namae);
    }
  }
  printf("身長が一番高い人は%sさんで%d cmです。 \n",max_namae,max_sincho);

  return 0;

}
