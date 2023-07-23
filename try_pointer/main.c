#include <stdio.h>
#include <stdlib.h>

typedef struct Node_ {
    int value;
    struct Node_ *next;
} Node;

void printList(Node **startNode) {
    Node *current = *startNode;
    while (current != NULL) {
        printf("%d -> ", current->value);
        current = current->next;
    }
    printf("END\n");
}

void addValueEnd(Node **startNode, int value) {
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->value = value;
    temp->next = NULL;
    if (*startNode == NULL) {
        *startNode = temp;
    } else {
        Node *current = *startNode;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = temp;
    }
}

void addValue(Node **startNode, int value) {
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->value = value;
    if (*startNode == NULL) {
        temp->next = NULL;
    } else {
        temp->next = *startNode;
    }
    *startNode = temp;
}

void deleteValue(Node **startNode, int value) {
    Node *current = *startNode;
    Node *previous = NULL;

    while (current != NULL) {
        previous = current;
        printf("%d", current->value);
        current = current->next;
    }
}



int main() {
    Node *initNode = NULL;
    
    addValue(&initNode, 40);
    addValue(&initNode, 30);
    addValue(&initNode, 20);
    addValueEnd(&initNode, 50);
    deleteValue(&initNode, 30);
    printList(&initNode);

    return 0;
}