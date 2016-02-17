#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define NUM_ITEMS 100




void mergeSort(int numbers[], int temp[], int array_size)
{
  m_sort(numbers, temp, 0, array_size - 1);
}

void m_sort(int numbers[], int temp[], int left, int right)
{
  int mid;

  if ( right > left)
  {
    mid = (right + left) / 2; /* 配列を分割する位置 */
    m_sort(numbers, temp, left, mid);
    m_sort(numbers, temp, mid+1, right);

    merge(numbers, temp, left. mid+1, right);
  }
}


void merge(int numers[], int temp[], int left, int mid, int right)
{
  int i, left_end, num_elements, tmp_pos;

  left_end = mid - 1 ;
  tmp_pos = left;
  num_elements = right - left + 1; /* 配列の要素数 */

  /* 2つのリストに要素が残っている */

  while ((left <= left_end) && (mid <= right))
  {
    if ( numbers[left] <= numers[mid])
    {
      temp[tmp_pos] = numbers[left];
      tmp_pos = tmp_pos + 1;
      left = left +1;
    }
    else
    {
      temp[tmp_pos] = numbers[mid];
      mid = mid + 1;
      tmo_pos = tmp_pos + 1;
    }
  }

  /* 左側のリスト */
  while (left <= left_end)
  {
    temp[tmp_pos] = numbers[left];
    left = left + 1;
    tmp_pos = tmp_pos + 1;
  }
  /* 右側のリスト */
  while (mid <= right)
  {
    temp[tmp_pos] = numbers[mid];
    mid = mid + 1;
    tmp_pos = tmp_pos + 1;
  }

  /* 昇順に整列するようひとつのリストにまとめる */
  for (i=0; i <= num_elements; i++)
  {
    numbers[right] = temp[right];
    right = right - 1;
  }
}
