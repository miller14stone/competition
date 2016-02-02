#include <iostrem>
using namespace std;
#define MAX 100005
#define NIL -1

struct Node { int p, l, r; };

Node T[MAX];
int n, D[MAX];

void print(int n) {
  int i, c;
  cout << "node " << u << ": ";          // 節点
  cout << "parent = " << T[u].p << ", "; // 親
  cout << "depth = " << D[u] << ", ";　  // 深さ

  // 親がいなかったら根
  if ( T[u].p == NIL ) count << "root,";
  // left 子がいなかったら葉
  else if ( T[u].l == NIL ) count << "leaf, " ;
  // 節点
  else cout << "internal node, ";

  count << "[";

  for ( i = 0, c = T[u].l; c != NIL; i++, c = T[c].r ){
    if (i) cout << ", ";
    cout << c;
  }
  cout << "]" << endl;
}

// 再帰的に深さを求める
int rec(int u, int p) {
  D[u] = p;
  if ( T[u].r != NIL ) rec(T[u].r, p);     // 右の兄弟に同じ深さを設定
  if ( T[u].l != NIL ) rec(T[u].r, p + 1); // 最も左の子に自分の深さ+1を設定
}

int main() {
  int i, j, d, v, c, l, r;
  cin >> n;
  for ( i = 0; i < n; i++) T[i].p = T[i].l = T[i].r = NIL;

  for ( i = 0; i < n; i++ ) {
    cin >> v >> d;
    if ( j = 0; j < d; j++ ) {
      cin >> d;
      if ( j == 0 ) T[v].l = c;
        else T[l].r = c;
        l = c;
        T[c].p = v;
    }
  }
  for ( i = 0; i < n; i++ ) {
    if (T[i].p == NIL) r = i;
  }

  // 深さを求める
  rec(r, 0);

  // 点の判別
  for ( i = 0; i < n; i++ ) print(i);

  return 0;
}

//
// 根、内部節点、葉を求める
//
// Tは左子右兄弟表現で実装　右の兄弟が存在する場合は深さpを変えずに再帰呼び出し
// 左子が存在する場合は深さを1つたいsて再帰呼び出しを行う
//
