#include <stdio.h>
#define MIN 1
#define MAX 100

// 入力用関数
int input(char *s);
// チェック用関数
int check(int);
// 面積計算用関数
int keisan(int, int);

int input(char *msg)
{
  int nagasa, kekka;
  do {
    printf("%s", msg);
    scanf("%d", &nagasa);
    kekka = check(nagasa);
    if ( kekka != 0) printf("Error 1~100の範囲ではありません。 \n");
  } while (kekka != 0);
  return nagasa;

}

int check(int x)
{
  if ( x >= MIN && x <= MAX )
      { return 0; }
  else
      { return 1; }
}

int keisan( int x, int y)
{
  return ( x * y);
}

int main(){

  char msg1[] = "--------長方形の面積を求める関数----------";
  char msg2[] = "縦の長さを入力してください-------->";
  char msg3[] = "横の長さを入力してください-------->";
  char msg4[] = "長方形の面積-------------------->";
  char msg5[] = "--------------------------------------";

  int tate, yoko, menseki;

  printf("%s\n", msg1);

  tate = input(msg2);
  yoko = input(msg3);
  menseki = keisan(tate, yoko);

  printf("%s%d\n",msg4,menseki);
  printf("%s\n",msg5);
  return 0;
}
