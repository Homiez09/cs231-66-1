#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int pole[n];
    int connect = n-1;

    for (int i = 0; i < n; i++) {
        scanf(" %d", &pole[i]);
    }

    for (int i = 0; i < n-2; i++) {
        int temp = 0;
        for (int j = i+2; j < n; j++) {
            if (pole[j-1] > temp) temp = pole[j-1];
            if (pole[i] > temp && temp < pole[j]) connect++;
        }
    }

    printf("%d", connect);

    return 0;
}

// 5
// 160 145 153 170 180
