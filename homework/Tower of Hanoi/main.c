#include <stdio.h>

// ฟังก์ชันเคลื่อนย้ายจาก A ไปยัง B
void move(int n, char from, char to) {
    printf("%d: move(%d, %c, %c)\n", n, n, from, to);
}

// ฟังก์ชัน Tower of Hanoi
void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        move(n, source, destination);
        return;
    }

    towerOfHanoi(n - 1, source, destination, auxiliary);
    move(n, source, destination);
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int N=2;
    printf("Input N=%d\n", N);
   

    printf("Output:\n");

    // เรียกใช้ฟังก์ชัน Tower of Hanoi เพื่อแก้ปัญหา
    towerOfHanoi(N, 'A', 'B', 'C');

    return 0;
}
