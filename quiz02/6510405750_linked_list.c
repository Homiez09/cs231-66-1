#include <stdio.h>
#include <stdlib.h>

typedef struct Header_ {
    int count;
    struct Node_ *initNode;
    struct Node_ *endNode;    
} Header;

typedef struct Node_ {
    int data;
    struct Node_ *nextNode;
} Node;

void countNode(Header *header) {
    Node *current = header->initNode;
    while (current != NULL) {
        header->count++;
        current = current->nextNode;
    }
}

int main(void) {
    Header *header = (Header *)malloc(sizeof(Header));
    Node *initNode = (Node *)malloc(sizeof(Node));
    Node *endNode = (Node *)malloc(sizeof(Node));

    header->count = 0;
    header->initNode = initNode;
    header->endNode = endNode;

    initNode->data = 1;
    initNode->nextNode = endNode;

    endNode->data = 2;
    endNode->nextNode = NULL;

    countNode(header);

    printf("%d", header->count);

    return 0;
}