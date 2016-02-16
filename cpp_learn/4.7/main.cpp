#include <Stack.h>

// メイン

int main(int argc, char* argv){
  double value, operand1, operand2;

  // スタックテンプレートクラスから、実数スタックを具体化する
  Stack<double> ostack(argc - 1);

  // コマンド引数からリバーシュボーリッシュ記法で記述された式を
  // 読み込み計算する
  for (int i = 1; i < argc; i++){

    // 加法
    if ( strcmp( argv[i], "+") == 0){
      ostack.pop( &operand2 );
      ostack.pop( &operand1 );
      ostack.push( operand1 + operand2 );
    }

    // 減法
    else if( strcmp(agrv[i], "-") == 0){
      ostack.pop( &operand2 );
      ostack.pop( &operand1 );
      ostack.push( operand1 + operand2 );
    }

    // 乗法
    else if( strcmp(argv[i], "*") == 0) {
      ostack.pop( &operand2 );
      ostack.pop( &operand1 );
      ostack.push( operand1 * operand2 );
    }

    // 除法
    else if( strcmp(argv[i],"/") == 0) {
      ostack.pop( &operand2 );
      ostack.pop( &operand1 );

      // 0除算のチェック
      if( operand2 == 0){
        cerr << "divid by 0" << endl;
        return 1;
      }

      ostack.push( operand1 / operand2 );
    }

    // 上記以外は整数を仮定する
    else {
      value = atof( argv[i] );
      ostack.push( value );
    }
  }

  // スタックの整合性の確認
  if( ostack.get_length() != 1){
    cerr << "illegal expression" << endl;
    return 1;
  }

  // 答を出力する
  ostack.pop( &value );
  cout << value << endl;

  // 正常終了
  return 0;
    // ostackがスコープから抜ける時、自動的にデストラクタが
    // 呼び出される
}
