#include <stdio.h>

int main(){

  int kingaku, ritu, bango, suryo, nebikigo, zeikomi, i, j;
  int bango_t[] = {101, 102, 103, 201, 202, 301, 302, 401, 402, 501, 999};
  char hinmei_t[][10]={"テレビ","ラジオ","ソコン","CD","DVD",
                       "掃除機","洗濯機","扇風機","加湿器","炊飯器"};
  int tanka_t[] = {148000,6800,198000,23000,35000,
                   26800,54000,12500,6800,15000};

  printf("-----------------販売金額算出-----------------\n");
  printf("販売番号を入力してください。-->");
  scanf("%d",&bango);
  printf("販売数量を入力してください。-->");
  scanf("%d",&suryo);

  j=99;
  for(i=0;bango_t[i] < 999; i++){
    if(bango_t[i]==bango){
      j=i;
      break;
    }
  }
  if (j==99) {
    printf("商品コードが正しくありません。\n");
  }
  else{
    kingaku = tanka_t[j] * suryo;
    if(kingaku > 5000000){
      ritu = 20;
    } else if(kingaku > 300000){
      ritu = 10;
    } else if(kingaku > 100000){
      ritu = 5;
    } else {
      ritu = 0;
    }

    nebikigo = kingaku * (100 - ritu) / 100;
    zeikomi = nebikigo * 105 / 100;

    printf("商品名%6s 数量:%-3d 単価: %-6d   金額: %-9d\n", hinmei_t[j], suryo, tanka_t[j],kingaku);
    printf("値引率:%-2d%%   値引き後:%-9d 税込:%-9d\n", ritu, nebikigo, zeikomi);}

    printf("---------------------------------------------------\n");
    return 0;

}
