#include <stdio.h>
#include <string.h>

int main() {
    char s[11], t[11];
    int i;
    int st;
    scanf("%s",s);
    scanf("%s",t);
    st = strlen(s);
    for(i=0;i<=st;i++) {
      if(s[i] == t[i] && s[i] != '@' && t[i] != '@') {
      }
      if(s[i] != t[i] && s[i] != '@' && t[i] != '@') {
            printf("You will lose\n");
            return 0;
      }
      if(s[i] == '@' && t[i] == '@') {
            if(t[i] == 'a' || t[i] == 't' || t[i] == 'c' || t[i] == 'o' || t[i] == 'd' || t[i] == 'e' || t[i] == 'r'){
            } else {
              printf("You will lose\n");
              return 0;
            }
      }
      if(t[i] == '@' && t[i] == '@') {
            if(s[i] == 'a' || s[i] == 't' || s[i] == 'c' || s[i] == 'o' || t[i] == 'd' || t[i] == 'e' || t[i] == 'r'){
            } else {
              printf("You will lose\n");
              return 0;
            }
      }
      if(s[i] == '@' && t[i] == '@'){
      }
    }
    printf("You can win\n");
    return 0;
}
