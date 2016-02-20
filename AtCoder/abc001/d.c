#include <stdio.h>

int record[500];

int check(int x, int y);

int main(void)
{
  int start, end, tmp = 0, i, fl, n;
  scanf("%d", &n);

  for (i = 1; i < n; i++){
    scanf("%d-%d", &start, &end);
    start = check(start,end);
    end   = check(end,start);
    record[start]++;
    record[end]++;
  }

  for ( i = 0; i < 500; i++){
    if (tmp == 0) {
      fl = 0;
    } else {
      fl = 1;
    }
    tmp += record[i];
    if (!fl && tmp > 0) {
      if ( i * 5 < 10) {
          printf("000");
        } else if ( i * 5 < 100) {
          printf("00");
        } else if ( i * 5 < 1000) {
          printf("0");
        }
          printf("%d-",i*5);
      } else if (fl && tmp == 0) {
        if (i * 5 < 10) {
          printf("000");
        } else if (i * 5 < 100) {
          printf("00");
        } else if (i * 5 < 1000) {
          printf("0");
        }
        printf("%d\n",i*5);
    }
  }
  return 0;
}

// 時間の区切りを揃える
int check(int x, int y);
{
  if(x) {
    if ( 56 <= y % 100 && y % 100 <= 59 ) {
      return (y / 100 + 1) * 100 / 5;
    } else {
      if (y % 5) {
        return y / 5 + 1;
      } else {
        return y / 5;
      }
    }
  } else {
    return y / 5;
  }
}
