#include <stdio.h>

int main(void) {
    double c = 0.0;
    if (scanf("%lf", &c) != 1) {
        return 1;
    }
    double f = c * 9.0 / 5.0 + 32.0;
    printf("%.2f\n", f);
    return 0;
}
