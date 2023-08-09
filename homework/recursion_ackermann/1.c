#include <stdio.h>

int exercise(int n, int sum) {
    if (n <= 1) {
        return sum; 
    } else {
        return exercise(n - 1, sum + 3); 
    }
}

int main() {
    for (int i = 1; i <= 5; i++) {
        int result = exercise(i, 2);
        printf("%d ", result);
    }

    return 0;
}