#include <stdio.h>

int sum_array(const int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    return sum;
}

int main(void) {
    int a[] = {1, 2, 3, 4};
    printf("sum=%d\n", sum_array(a, 4));
    return 0;
}
