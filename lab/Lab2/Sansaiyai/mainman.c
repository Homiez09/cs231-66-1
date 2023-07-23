#include <stdio.h>

typedef struct people_ {
    int id;
    int left;
    int right;
} people;

int main(void) {
    int n;
    scanf("%d", &n);

    people p[n];
    for (int i = 0; i < n; i++) {
        p[i].id = i+1;
        scanf(" %d %d", &p[i].left, &p[i].right);
    }

    int connects[n][n]; 
    for (int i = 0; i < n; i++) {
        // printf("[%d %d] ", p[i].left, p[i].right);
        for (int j = 0; j < n; j++) {
            if (p[i].left == p[j].id) {
                connects[i][j] = 1;
            } else if (p[i].right == p[j].id) {
                connects[i][j] = 1;
            } else {
                connects[i][j] = 0;
            }
        }
    }
    int sum = 0;
    for (int i = 0; i< n; i++) {
        int tempSum = 0;
        for (int j = 0; j < n; j++) {
            tempSum += connects[i][j];
            printf("%d ", connects[i][j]);
        }
        printf("\n");
        tempSum *= 2;
        if (tempSum > sum) {
            sum = tempSum;
        }
    }

    // printf("%d", sum);

    return 0;
}