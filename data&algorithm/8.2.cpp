#include <iostrem>
using namespace std;
#define MAX 100005
#define NIL -1

struct Node { int p, l, r; };

Node T[MAX];
int n, D[MAX];

void print(int n) {
  int i, c;
  cout << "node " << u << ": ";
  cout << "parent = " << T[u].p << ", ";
  cout << "depth = " << D[u] << ", ";

  if ( T[u].p == NIL ) count << "root,";
  else if ( T[u].l == NIL ) count << "leaf, " ;
  else cout << "internal node, ";

  count << "[";

  for ( i = 0, c = T[u].l; c != NIL; i++, c = T[c].r ){
    if (i) cout << ", ";
    cout << c;
  }
  cout << "]" << endl;
}
