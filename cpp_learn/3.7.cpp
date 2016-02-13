#include <iostream>
using namespace std;

int main(){
  int n1, n2, n3;
  cin >> n1 >> n2;

  // 例外が起こるかもしれないブロック
  try{
    if( n2 == 0 )
      throw n2;
    if( n1 == 0 )
      throw "0をどんな数で割っても0に決まってるじゃん";
    if( n1 == n2 )
      throw &n1;

    n3 = n1 / n2;
    cout << "余算を実行しました" << endl;
    cout << n1 << "/" << n2 << "=" << n3 << endl;
  }
  catch(int arg){
    // 例外がおきた場合に処理したいブロック
    cout << "余算エラー:" << arg << endl;
  }
  catch(char* arg){
    // 例外がおきた場合に処理したいブロック
    cout << "余算エラー:" << arg << endl;
  }
}
