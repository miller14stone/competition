#include <iostream>
#include <stack>
#include <stdio.h>
using namespace std;

//////////////////////////////////////////////////
// メイン

int main(int argc, char** argv){
  int value, operand1, operand2;

  // スタックテンプレートクラスから、実数スタックを具現化する
  IntStack ostack( argc - 1 );

  // コマンド行引数からリバーシュボーリッシュ記法で記述された式を
  // 読み込み計算する
  for ( int i = 1; i < argc; i++ ){
    // 加法
    if( strcmp( argv[i],"+") == 0 ){
      ostack.pop( &operand2 );
      ostack.pop( &operand1 );
      ostack.push( operand1 + operand2 );
    }

    // 減法
    else if( strcmp( argv[i], "-") == 0){
      ostack.pop( &operand2 );
      ostack.pop( &operand1 );
      ostack.push( operand1 - operand2 );
    }

    // 乗法
    else if ( strcmp( argv[i], "*") == 0){
      ostack.pop( &operand2 );
      ostack.pop( &operand1 );
      ostack.push( operand1 * operand2 );
    }

    // 除法
    else if ( strcmp( argv[i], "/") == 0){
      ostack.pop( &operand2 );
      ostack.pop( &operand1 );

      // 0除算のチェック
      if( operand2 == 0){
        std::cerr << "divid by 0" << std::endl;
        return 1;
      }

      ostack.push( operand1 / operand2 );
    }

    // 上記以外は整数を仮定する
    else{
      value = atoi( argv[i] );
      ostack.push( value );
    }
  }

  // スタックの整合性の確認
  if ( ostack.get_length() != 1){
    std::cerr << "illegal expression" << std::endl;
    return 1;
  }

  // 答えを出力する
  ostack.pop( &value );
  std::cout << value << std::endl;

  // 正常終了
  return 0;
    // ostackがスコープから抜ける時、自動的にデストラクタが呼び出される

}
