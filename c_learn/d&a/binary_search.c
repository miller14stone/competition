#include <stdio.h>

#define ARRAY_SIZE 7 /* size of array */
/* 二分木 */
int main(void){
  int a[ARRAY_SIZE] = {1,2,3,4,5,6,7}; /* sorted array */
  int left = 0; /* start key of index */
  int right = ARRAY_SIZE; /* end key of index */
  int mid; /* middle key of index */
  int value; /* search value */

  puts("Find value?");
  scanf("%d", &value);

  while(left <= right) {
    mid = (left + right) / 2; /* calc of middle key */
    if (a[mid] == value) {
      puts("Found!\n");
      return 0;
    } else if (a[mid] < value) {
      left = mid + 1; /* adjustment of left(start) key */
    } else {
      right = mid - 1; /* adjustment of right(end) key */
    }
  }

  puts("Not Found.\n");
  return 0;
}
