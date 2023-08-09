#include <stdio.h>

int ack(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return ack(m - 1, 1);
    } else {
        return ack(m - 1, ack(m, n - 1));
    }
}

int main() {
    int result = ack(1, 1);
    printf("ack(1, 1) = %d\n", result);
    return 0;
}
