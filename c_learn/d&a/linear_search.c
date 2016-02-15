#include <stdio.h>

#define ARRAY_SIZE (8) /* size of array */

int main(void) {
  int array[ARRAY_SIZE] = {9, 7, 18, 20, 8, 39, 77, 35};
  int key;
  int i;

  puts("find value?");
  scanf("%d", &key);

  for(i = 0; i < ARRAY_SIZE; ++i) {
    if(array[i] == key) {
        puts("Found!\n");
        return 0;
    }
  }

  puts("Not Found.\n");
  return 0;
}
