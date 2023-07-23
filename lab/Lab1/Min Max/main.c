#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int min, max;
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);

        if (i == 0) {
            min = x;
            max = x;
        } else {
            if (x < min) {
                min = x;
            }
            if (x > max) {
                max = x;
            }
        }
    }

    printf("%d\n%d", min, max);

    return 0;
}