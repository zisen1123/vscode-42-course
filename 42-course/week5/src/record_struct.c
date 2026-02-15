#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[32];
} Record;

int main(void) {
    Record r = {1, "alice"};
    printf("id=%d name=%s\n", r.id, r.name);
    return 0;
}
