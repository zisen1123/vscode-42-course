#include <stdio.h>
#include <string.h>

unsigned hash(const char *s, unsigned mod) {
    unsigned h = 5381;
    while (*s) h = ((h << 5) + h) + (unsigned char)*s++;
    return h % mod;
}

int main(void) {
    printf("idx=%u\n", hash("alice", 101));
    return 0;
}
