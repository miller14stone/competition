#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 7

void heepSort(int numbers[], int array_size);
void siftDown(int numbers[], int root, int bottom);
void print_data(int numbers[], int array_size);


int main()
{
  int numbers[] = {1, 154, 2, 198, 34, 6, 87};
  print_data(numbers,MAX_SIZE);

  heapSort(numbers, MAX_SIZE);

  printf("\n\n");
  print_data(numbers, MAX_SIZE);
  return EXIT_SUCCESS;

}

void heepSort(int numbers[], int array_size)
{
  int i, temp;

  for ( i = (array_size / 2) - 1; i >= 0; i--)
  {
    siftDown(numbers, i, array_size);
  }

  for ( i = array_siez - 1; i >= 1; i--)
  {
    temp = numbers[0];
    numbers[0] = numbers[i];
    numbers[i] = temp;
    siftDown(numbers, 0, i - 1);
  }
}

void siftDown(int numbers[], int root,int bottom)
{
  int done, maxChildm, temp;

  done = 0;

  while((root * 2 <= bottom) && (!done)) {
    if (root * 2 == bottom){
      maxChild = root * 2;
    } else if (numbers[root * 2] > numbers[root * 2 + 1]) {
      maxChild = root * 2;
    } else {
      maxChild = root * 2 + 1;
    }

    if ( numbers[root] < numbers[maxChild]) {
      temp = numbers[root];
      numbers[root] = numbers[maxChild];
      numbers[maxChild] = temp;
      root = maxChild;
    } else {
      done = 1;
    }

  }
}

void print_data(int numbers[], int array_size)
{
  int i;
  for (i = 0; i < MAX_SIZE; i++){
    printf("%d\n", numbers[i]);
  }
}
