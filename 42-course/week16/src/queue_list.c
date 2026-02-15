#include <stdio.h>
#include <stdlib.h>

typedef struct Node { int v; struct Node *next; } Node;

typedef struct { Node *head; Node *tail; } Queue;

void push(Queue *q, int v) {
    Node *n = malloc(sizeof(Node));
    if (!n) return;
    n->v = v; n->next = NULL;
    if (!q->tail) q->head = n; else q->tail->next = n;
    q->tail = n;
}

int main(void) {
    Queue q = {0};
    push(&q, 1); push(&q, 2);
    if (q.head) printf("front=%d\n", q.head->v);
    return 0;
}
