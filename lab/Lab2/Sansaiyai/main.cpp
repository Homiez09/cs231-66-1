#include <iostream>

using namespace std;

typedef struct Node_ {
    int left;
    int right;
} Node;

int main() {
    int n;
    cin >> n;

    Node students[n];

    for (int i = 0; i < n; i++) {
        cin >> students[i].left >> students[i].right;
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (students[i].left == 0 && students[i].right) {
            int tempCount = 2;
            int hand = students[i].right;
            // cout << students[i].left << students[i].right << " ";
            while (students[hand-1].right != 0) {
                tempCount++;
                hand = students[hand-1].right;
            }
            if (tempCount > count) {
                count = tempCount;
            }
        }
    }

    if (count == 0) {
        cout << 1;
    } else {
        cout << count;
    }

    return 0;
}

/* 1 2
3 4 5 6 7
8 9 10 */











// #include <stdio.h>

// typedef struct people_ {
//     int id;
//     int left;
//     int right;
// } people;

// int main(void) {
//     int n;
//     scanf("%d", &n);    

//     people p[n];
//     for (int i = 0; i < n; i++) {
//         p[i].id = i+1;
//         scanf(" %d %d", &p[i].left, &p[i].right);
//     }

//     for (int i = 0; i < n; i++) {
//         //printf("[%d: %d %d] ", p[i].id, p[i].left, p[i].right);
//         for (int j = 0; j < n; j++) {
//             if (p[i].left == p[j].id) {
//                 printf("[%d: %d %d] ", p[i].id, p[i].left, p[i].right); 
//             } else if (p[i].right == p[j].id) {
//                 printf("[%d: %d %d] ", p[i].id, p[i].left, p[i].right); 
//             }
//             printf("\n");
//         }
//     }

//     return 0;
// }