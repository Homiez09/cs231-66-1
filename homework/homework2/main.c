#include <stdio.h>

int main() {
    char name[5][20];
    int score[5];
    int average = 0;
    for (int i = 0; i < 5; i++) {
        printf("Enter name and score: ");
        scanf("%s %d", name[i], &score[i]);
    }

    for (int i = 0; i < 5; i++) {
        average += score[i];
    }

    average /= 5;

    printf("Average score: %.2f\n", (float)average);

    for (int i = 0; i < 5; i++) {
        if (score[i] > average) {
            printf("%s %d\n", name[i], score[i]);
        }
    }


    return 0;
}