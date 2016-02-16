
///////////////////////////////////
//
//  テンプレートスタッククラス(動的メモリ割当版) 定義
//


// 2重取り込みを防止する
#ifndef STACK_H
#define STACK_H

#include <process.h>
#include <iostream>

///////////////////////////////////
// スタッククラス

template<class Type>
class Stack{

public:

  // コンストラクタ:
  // Stack オブジェクトが定義された時に自動的に呼び出される
  Stack( int sz = 100) {
    // コンストラクタ引数を省略すると、スタックサイズは100となる
    // スタックサイズを保存する
    size = sz;

    // スタックの実態(size個のType配列)を自由記憶上に割り当てる
    stack = new Type[size];

    // スタックポインタを初期化する
    sp = 0;
  }

  // デストラクタ:
  // Stackオブジェクト
  ~Stack(){
    // スタック本体を削除する
    delete [] stack;
  }

  // プッシュ
  void push(Type value){
    // オーバーフローチェック
    if(sp >= size){
      cerr << "stack overflow" << endl;
      exit(1);
    }

    *( stack + sp ) = value;
    sp++;
  }

  // ポップ
  void pop(Type* p_value){
    // アンダーフローチェック
    if(sp <= 0) {
      cerr << "stack underflow" << endl;
      exit(1);
    }
    sp--;
    *p_value = *(stack + sp);
  }

  // 現在のスタック長を獲得する
  int get_length(){
    return sp;
  }

  // 指定位置(スタックトップからのオフセット)のスタック要素を覗き見る
  void speek(Type* p_value, int offset = 0){
    // オフセットのチェック
    if (offset >= sp){
      cerr << "stack underflow" << endl;
      exit(1);
    }

    // 試定位置の要素をコピーする
    *p_value = *(stack + sp - offset - 1);
  }

private:

  //////////////////////////////////////////////////
  // 管理情報

  // スタックポインタ : 次にプッシュする位置
  int sp;

  // スタックサイズ
  int size;

  // スタック
  Type *stack;
};

#endif // STACK_H
