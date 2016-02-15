#include <stdio.h>

#define NUM_ITEMS 7

void bubbleSort(int numbers[], int array_size);

void printArray(int numbers[], int array_size);


int main()
{
  int numbers[NUM_ITEMS] = {6,5,3,1,7,2,4};

  printf("Start:\n");
  printArray(numbers, NUM_ITEMS);
  printf("\n");

  // perfom bubble sort on array
  bubbleSort(numbers, NUM_ITEMS);

  printf("Done:\n");
  printArray(numbers, NUM_ITEMS);
  printf("\n");

  return 0;
}



void bubbleSort(int numbers[], int array_size)
{
  int i, j, temp;

  for (i = 0; i < (array_size - 1); i++) {
    for (j = (array_size - 1); j > i; j--) {
      printf("compare: %d and %d\n",numbers[j],numbers[j - 1]);
      if (numbers[j-1] > numbers[j]) {
        temp = numbers[j - 1];
        numbers[j - 1] = numbers[j];
        numbers[j] = temp;

        printf("\nswap:");
        printArray(numbers, array_size);
        printf("\n");
      }
    }
    printArray(numbers, array_size);
    printf("\n");
  }
}


void printArray(int numbers[], int array_size)
{
  int x;
  for ( x = 0; x < array_size; x++) {
    printf("%d", numbers[x]);
  }
}
