#include <stdio.h>
#include <stdlib.h>

typedef struct Node_ {
    int value;
    struct Node_ *pre;
    struct Node_ *next;
} Node;

void insert(Node **initNode, int value) {
    Node *tempNode = (Node*)malloc(sizeof(Node));
    tempNode->value = value;

    if (*initNode == NULL) {
        *initNode = tempNode;
        tempNode->next = NULL;
    } else {
        if (tempNode->value < (*initNode)->value) {
            tempNode->next = *initNode;
            *initNode = tempNode;
        } else {
            /* Node *current = *initNode;
            while (current->next != NULL) {
                if (tempNode->value > current->value ) {

                }
            } */
        }
    }
}

void printList(Node *valueList) {
    Node *temp = valueList;
    while (temp != NULL) {
        printf("%d ", temp->value);
        temp = temp->next;
    }
}

int main(void) {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf(" %d", &a[i]);
    }
    
    Node *init = NULL;

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
        insert(&init, a[i]);
    }

    // printList(init);

    return 0;
}