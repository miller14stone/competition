#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

struct Node {
  int key;
  Node *right, *left, *parent;
}

Node *root, *NIL;

Node * find(Node *u, int k) {
  while ( u != NIL && k != u->key ) {
    // 左に見に行く
    if ( k < u->key ) u = key->left;
    // 右に見に行く
    else u = u->right;
  }
  return u;
}

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
    if ( com[0] == 'f' ) {
      scanf("%d", &x);
      Node *t = find(root, x);
      if ( t != NIL ) printf("yes\n");
      else printf("no\n");
    } else if ( com == "insert" ) {
      scanf("%d", &x);
      insert(x);
    } else if ( com == "print" ) {
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }

  return 0;
}
