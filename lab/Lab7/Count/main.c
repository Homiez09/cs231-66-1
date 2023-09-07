#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d ", arr + i);
    }

    int src;
    int count = 0;
    scanf("%d", &src);
    for (int i = 0; i < n; i++) {
        if (arr[i] == src) count++;
    }

    printf("%d", count);
    return 0;
}