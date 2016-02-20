#include <stdio.h>

int seihoukei(void){
  double hen,kotae;
  printf("一辺の長さ------>");
  scanf("%lf", &hen);
  kotae = hen * hen;
  return kotae;
}

int chouhoukei(void){
  double tate,yoko, kotae;
  printf("縦の長さ------->");
  scanf("%lf", &tate);
  printf("横の長さ------->");
  scanf("%lf", &yoko);
  kotae = tate * yoko;
  return kotae;
}

int en(void){
  double hankei,kotae;
  printf("半径の長さ----->");
  scanf("%lf", &hankei);
  kotae = hankei * hankei * 3.141592;
  return kotae;
}

int main() {

  int shurui;
  double menseki;

  printf("図形の種類　(正方形=1,長方形=2, 円=3) -->");
  scanf("%d",&shurui);

  switch(shurui){
      case 1:
          menseki = seihoukei();
          break;
      case 2:
          menseki = chouhoukei();
          break;
      case 3:
          menseki =  en();
          break;
      default:
          menseki = 0;
          break;
  }
  printf("面積は %10.2fcm です", menseki);

  return 0;

}
