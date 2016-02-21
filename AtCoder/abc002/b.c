#include <stdio.h>
#include <string.h>

int main() {

  int i, count;
  char moji[100];

  scanf("%s", moji);

  count = strlen(moji);
  for ( i = 0; i < count; i++) {

    if(moji[i] == 'a' || moji[i] == 'i' || moji[i] == 'u' || moji[i] == 'e' || moji[i] == 'o')
      continue;
    printf("%c", moji[i]);
  }
  putchar('\n');

  return 0;
}
