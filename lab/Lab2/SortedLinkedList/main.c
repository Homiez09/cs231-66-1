#include <stdio.h>
#include <stdlib.h>

typedef struct Node_
{
    int value;
    struct Node_ *next;
} Node;

typedef Node *NodePtr;

void insert(NodePtr *valueList, int value)
{
    NodePtr newNode = (NodePtr)malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = NULL;

    if (*valueList == NULL)
    {
        *valueList = newNode;
        return;
    }

    if (value < (*valueList)->value)
    {
        newNode->next = *valueList; // newNode link to valueList.
        *valueList = newNode;
        return;
    }

    NodePtr current = *valueList;
    for (; current->next != NULL; current = current->next)
    {
        if (value >= current->value && value < (current->next)->value)
        {
            newNode->next = current->next;
            current->next = newNode;
            return;
        }
    }

    current->next = newNode;
}

void printValueList(NodePtr valueList)
{
    NodePtr current = valueList;
    for (; current != NULL; current = current->next)
    {
        printf("%d\n", current->value);
    }
}

int main(void)
{
    NodePtr init = NULL;
    int value = 0;

    /*  clock_t start, end;
     double execution_time;
     start = clock(); */

    while (value != -1)
    {
        scanf(" %d", &value);
        if (value != -1)
            insert(&init, value);
    }

    printValueList(init);
    /*     end = clock();
        execution_time = ((double)(end - start))/CLOCKS_PER_SEC;

        printf("execution_time: %f\n", execution_time); */

    return 0;
}