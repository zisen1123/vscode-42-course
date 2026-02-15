#include <stdio.h>
#include <stdlib.h>

typedef struct Node { int v; struct Node *l; struct Node *r; } Node;

Node *insert(Node *n, int v) {
    if (!n) { n = malloc(sizeof(Node)); if (!n) return NULL; n->v = v; n->l = n->r = NULL; return n; }
    if (v < n->v) n->l = insert(n->l, v); else if (v > n->v) n->r = insert(n->r, v);
    return n;
}

void inorder(Node *n) { if (!n) return; inorder(n->l); printf("%d ", n->v); inorder(n->r); }

int main(void) {
    Node *root = NULL;
    root = insert(root, 3); root = insert(root, 1); root = insert(root, 4);
    inorder(root); printf("\n");
    return 0;
}
