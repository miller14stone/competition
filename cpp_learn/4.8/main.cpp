#include <string.h>
#include <iostream>
#include "Stack.h"
using namespace std;

// 定数定義
#define LINE_SIZE 100
#define MAX_LINES 1000

// メイン

int main(){
  // 入力行スタック
  Stack<char*> lines( MAX_LINES );

  // 行バッファ
  char line[LINE_SIZE];

  char* p;

  // 標準入力ストリームから行を順次読み込む
  while( cin.getline( line, LINE_SIZE)) {
    // 入力業を複製する
    p = new char[strlen(line)+1];
    strcpy(p, line );

    // 入力行のアドレスをスタックに積む
    lines.push(p);
  }

    // スタックの先頭から順次文字列を取り出し、出力する
   while( lines.get_length( ) > 0 ){
       // 文字列をスタックの先頭から取り出し出力する
       lines.pop( &p );
       cout << p << '\n';

       // 不要となった文字列を解放する
       delete [ ] p;
   }

   // 正常終了
   return 0;
}
