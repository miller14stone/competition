void shellSort(int numbers[], int array_size)
{
  int i, j, increment, temp;

  increment = 4;
  while ( increment > 0)
  {
    for ( i = 0; i < array_size; i++)
    {
      j = i;
      temp = numbers[i];
      while ((j >= increment) && (numbers[j - increment] > temp))
      {
        numbers[j] = numbers[j - increment];
        j = j - increment;
      }
      numbers[j] = temp;
    }
    if (increment/2 != 0) {
      increment = increment / 2;
    } else if (incremnet == 1) {
      increment = 0;
    } else {
      increment = 1;
    }
  }
}
