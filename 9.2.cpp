#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;

// 構造体
struct Node {
  int key;
  Node *right, *left, *parent;
};

Node *root, *NIL;

void insert(int k) {
  Node *y = NIL;
  Node *x = root;
  Node *z;
  // 動的にメモリを確保する　malloc
  z = (Node *)malloc(sizeof(Node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  // xがNILじゃなかった時の処理
  while ( x != NIL ) {
    y = x;
    if ( z->key < x->key ) {
      x = x->left;
    } else {
      x = x->right;
    }
    }
  }
  z->parent = y;
  // yがnillだった場合の処理 親がいない時
  if ( y == NIL ){
    root = z;
  } else {
    if ( z->key < y->key ) {
      y->left = z;
    } else {
      y->right = z;
    }
  }
}

void inorder(Node *u) {
  if ( u == NIL ) return;
  inorder(u->left);
  printf(" %d", u->key);
  inorder(u->right);
}

void preorder(Node *u) {
  if ( u == NIL ) return;
  printf(" %d", u->key);
  preorder(u->left);
  preorder(u->right);
}

int main() {
  int n, i, x;
  string com;

  scanf("%d", &n);

  for ( i = 0; i < n; i++ ) {
    cin >> com;
    if ( com == "insert" ) {
      scanf("%d", &x);
      insert(x);
    } else if ( com == "print" ) {
      inorder(root);
      printf("\n");
      preorder("\n");
      printf("\n");
    }
  }

  return 0;
}
