#include <stdio.h>

int ft_abs(int x) { return x < 0 ? -x : x; }

int main(void) {
    printf("abs=%d\n", ft_abs(-42));
    return 0;
}
