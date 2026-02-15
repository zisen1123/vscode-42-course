#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *next;
} Node;

int main(void) {
    Node *head = malloc(sizeof(Node));
    if (!head) return 1;
    head->value = 42;
    head->next = NULL;
    printf("head=%d\n", head->value);
    free(head);
    return 0;
}
