#include <stdio.h>

int tailRecursion(int n, int sum) {
    if (n <= 1) {
        return sum;
    } else {
        return tailRecursion(n - 1, sum + 3);
    }
}

int main() {
    for (int i = 1; i <= 5; i++) {
        int result = tailRecursion(i, 2);
        printf("%d ", result);
    }

    printf("\n");
    return 0;     
}
