#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define NUM_ITEMS 100

void selectionSort(int numbers[], int array_size);
int numbers[NUM_ITEMS];

int main()
{
  int i;

  // seed random number generator
  srand(getpid());

  // fill array with random integers
  for( i = 0; i < NUM_ITEMS; i++) {
    numbers[i] = random();
  }

  // perform
}
