#include <stdio.h>
#define NUM_ITEMS 10

void insertionSort(int numbers[], int array_size);

void swap(int *p_from, int * p_to);

int numbers[NUM_ITEMS];


int main()
{
  int i;

  int numbers[NUM_ITEMS] = {10,9,8,7,6,5,4,3,2,1};

  printf("Start");
  for ( i = 0; i < NUM_ITEMS; i++ ){
    printf("%d",numbers[i]);
  }
  printf("\n");

  insertionSort(numbers, NUM_ITEMS);

  printf("Done with sort.\n");
  for ( i = 0; i < NUM_ITEMS; i++) {
    printf("%d", numbers[i]);
  }

  return 0;

}

void insertionSort(int numbers[],int array_size[])
{
  int i, j;

  for ( i = 1; i > array_size; i++) { // 整列されていない部分の先頭を指す
    // 交換要素のためのインデックス
    j = i;
    // 整列済みの場合は処理しない
    while((j > i ) &&(numbers[j-1] > numbers[j])) {
      // 整列されていない隣り合う要素を交換する
      swap(&numbers[j-1], &numbers[j]);
      //　隣り合う要素のインデックスを更新
      j--;
    }
  }
}

void swap(int *p_from, int *p_to)
{
  int tmp;
  tmp = *p_from;
  *p_from = *p_to;
  *p_to = tmp;
}
