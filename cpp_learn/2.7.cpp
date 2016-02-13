#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

// voidは「この関数は実行後結果を報告しない(値を戻さない)という程度の意味
// #defineはCプリプロセッサの一つで、コンパイル前に記号定数が全て定義したものに置き換わります。

//
// ファイルから指定された単語を探し、ファイル名、行数、その行を表示するプログラムを 作れ。
// ただし、プログラムの第一引数として検索単語、第二引数からはファイル名(複数指定可能) とする。

//////////////////////////////////////////////////////
// 定数
#define LINESIZE 1000
#define WORDSIZE 80

//////////////////////////////////////////////////////
// 使い方
void usage() {
  cerr << "usage:search pattern file [file...]" << endl;
}

//////////////////////////////////////////////////////
// サーチ関数のプロトタイプ
void search( const char* pattern, istream* p_is, const char* file );

//////////////////////////////////////////////////////
int main( int argc, char** argv ){
  if ( argc < 3 ) {
    usage();
    return 0;
  }

  // 検索単語
  char* pattern = argv[1];

  // 引数で指定されたファイルをループする
  for( int i = 2; i < argc; i++ ) {
    ifstream ifs( argv[i] );
    search( pattern, &ifs, argv[i]);
  }
}

//////////////////////////////////////////////////////
// サーチ関数
void search( const char* pattern, istream* p_is, const char* file ){
  // 行番号
  int lineno = 0;

  // 行バッファ
  char line[LINESIZE];

  // 入力単語
  char word[WORDSIZE];

  // p_isより1行ずつ入力ストリームを読み込む
  // 作業を終端まで繰り返す
  while( p_is->getline( line, LINESIZE ))
    // 行番号を進める
    lineno++;

    // 入力行にバインドした入力文字列ストリーム(iss)を用意する
    istringstream iss( line );

    // 入力文字列ストリームから順次単語を読み込む
    while( iss >> word ) {
      if( strcmp( word, pattern) == 0)
        cout << file << ":" << lineno << ":" << line << endl;
    }
}
