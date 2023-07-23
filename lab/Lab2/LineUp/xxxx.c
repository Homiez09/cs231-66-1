#include <stdio.h>
#include <stdlib.h>

void arrange_students(int N, int students[]) {
    int i, j;
    int** queues = (int**)malloc(N * sizeof(int*));
    
    // สร้างแถวแรก
    queues[0] = (int*)malloc(N * sizeof(int));
    queues[0][0] = students[0];
    int num_queues = 1;
    
    for (i = 1; i < N; i++) {
        int current_student = students[i];
        int last_queue_length = (sizeof(queues[num_queues - 1]) / sizeof(int));
        int last_queue_last_element = queues[num_queues - 1][last_queue_length - 1];
        
        if (current_student > last_queue_last_element) {
            // นักเรียนใหม่เข้าแถวสุดท้าย
            queues[num_queues - 1][last_queue_length] = current_student;
        } else if (current_student < queues[0][0]) {
            // นักเรียนใหม่เข้าแถวต้นสุด
            for (j = num_queues; j > 0; j--) {
                queues[j] = queues[j - 1];
            }
            queues[0] = (int*)malloc(N * sizeof(int));
            queues[0][0] = current_student;
            num_queues++;
        } else {
            // นักเรียนใหม่เข้าแถวที่เหมาะสม
            for (j = 0; j < num_queues; j++) {
                if (current_student < queues[j][0]) {
                    int queue_length = (sizeof(queues[j]) / sizeof(int));
                    for (int k = queue_length; k > 0; k--) {
                        queues[j][k] = queues[j][k - 1];
                    }
                    queues[j][0] = current_student;
                    break;
                }
            }
        }
    }
    
    // แสดงผลลัพธ์
    for (i = 0; i < num_queues; i++) {
        int queue_length = (sizeof(queues[i]) / sizeof(int));
        for (j = 0; j < queue_length; j++) {
            printf("%d ", queues[i][j]);
        }
        printf("\n");
    }
    
    // คืนค่าหน่วยความจำ
    for (i = 0; i < num_queues; i++) {
        free(queues[i]);
    }
    free(queues);
}

int main() {
    int N;
    scanf("%d", &N);
    
    int* students = (int*)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        scanf("%d", &students[i]);
    }
    
    arrange_students(N, students);
    
    free(students);
    return 0;
}