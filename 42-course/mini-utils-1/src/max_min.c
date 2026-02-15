#include <stdio.h>

int main(void) {
    int x = 0;
    int max = 0;
    int min = 0;

    if (scanf("%d", &x) != 1) {
        return 1;
    }
    max = x;
    min = x;

    for (int i = 1; i < 5; i++) {
        if (scanf("%d", &x) != 1) {
            return 1;
        }
        if (x > max) {
            max = x;
        }
        if (x < min) {
            min = x;
        }
    }

    printf("max %d\nmin %d\n", max, min);
    return 0;
}
