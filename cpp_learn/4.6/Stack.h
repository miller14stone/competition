
//////////////////////////////////////////////////
//
//  整数のスタッククラス(動的メモリ割当版)定義
//


// 2重取り込みを防止する
#ifndef INSTACK_H
#define INSTACK_H

#include <stdlib.h>
#include <process.h>
#include <iostream>
using namespace std;

//////////////////////////////////////////////////
// スタッククラス

class IntStack {

public:

  // コンストラクタ:
  // IntStack オブジェクトが定義された時に自動的に呼び出される
  IntStack( int sz = 100 ){
    // コンストラクタ引数を省略すると、スタックサイズは100となる
    // スタックサイズを保存する
    size = sz;

    // スタックの実態(size個のint配列)を自由記憶上に割り当てる
    stack = new int[size];

    // スタックポインタを初期化する
    sp = 0;
  }

  // デストラクタ :
  // IntStack オブジェクトが削除される時に自動的に呼び出される
  ~ IntStack() {
    //スタック本体を削除する
    delete [] stack;
  }

  //　プッシュ
　void push( int value ){
    // オーバーフローのチェック
    if (sp >= size ){
      cerr << "stack overflow" << endl;
      exit(1);
    }

    *(stack + sp) = value;
    sp++;
  }

  void pop(int* p_value){
    // アンダーフローのチェック
    if(sp <= 0){
      cerr << "stack underflow" << endl;
      exit( 1 );
    }

    sp--;
    *p_value = *(stack + sp);
  }

  // 現在のスタックの長さを獲得する
  int get_length(){
      return sp;
  }

  // 指定位置(スタックトップからのオフセット)のスタック要素を覗き見る
  void peek(int* p_value, int offset = 0){
    // オフセットのチェック
    if ( offset >= sp ){
      cerr << "stack underflow" << endl;
      exit(1);
    }

    // 指定位置の要素をコピーする
    *p_value = *( stack + sp - offset - 1);
  }

private:

  //////////////////////////////////////////////////
  // 管理情報

  // スタックポインタ : 次にプッシュする位置
  int sp;

  // スタックサイズ
  int size;

  // スタック
  int *stack;

};

#endif //INSTAKC_H
