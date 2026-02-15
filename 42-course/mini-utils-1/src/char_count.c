#include <stdio.h>

int main(void) {
    int count = 0;
    int ch = 0;

    while ((ch = getchar()) != EOF) {
        if (ch == '\n') {
            break;
        }
        count++;
    }

    printf("%d\n", count);
    return 0;
}
