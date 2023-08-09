#include <stdio.h>

int Ank(int m, int n);

int main() {
    int result = Ank(1, 1);
    printf("Ank(1, 1) = %d\n", result);
    return 0;
}

int Ank(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return Ank(m - 1, 1);
    } else {
        return Ank(m - 1, Ank(m, n - 1));
    }
}
