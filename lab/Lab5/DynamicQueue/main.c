#include <stdio.h>
#include <stdlib.h>

typedef struct QueueNode
{
    int data;
    struct QueueNode *next;
} QueueNode;

typedef struct Queue
{
    QueueNode *front;
    QueueNode *rear;
    int size;
} Queue;

QueueNode *createNode(int data)
{
    QueueNode *newNode = malloc(sizeof(QueueNode));
    if (newNode)
    {
        newNode->data = data;
        newNode->next = NULL;
    }
    return newNode;
}

Queue *createQueue()
{
    Queue *queue = malloc(sizeof(Queue));
    if (queue)
    {
        queue->front = NULL;
        queue->rear = NULL;
        queue->size = 0;
    }
    return queue;
}

void enqueue(Queue *queue, int data)
{
    QueueNode *newNode = createNode(data);
    if (newNode)
    {
        if (queue->rear == NULL)
        {
            queue->front = newNode;
            queue->rear = newNode;
        }
        else
        {
            queue->rear->next = newNode;
            queue->rear = newNode;
        }
        queue->size++;
    }
}

void dequeue(Queue *queue)
{
    if (queue->front == NULL)
    {
        return;
    }

    QueueNode *temp = queue->front;
    queue->front = queue->front->next;
    free(temp);

    if (queue->front == NULL)
    {
        queue->rear = NULL;
    }

    queue->size--;
}

void displayFront(Queue *queue)
{
    if (queue->front == NULL)
    {
        printf("EMPTY\n");
    }
    else
    {
        printf("%d\n", queue->front->data);
    }
}

void displaySize(Queue *queue)
{
    printf("%d\n", queue->size);
}

void freeQueue(Queue *queue)
{
    while (queue->front)
    {
        dequeue(queue);
    }
    free(queue);
}

int main()
{
    int N;
    scanf("%d", &N);

    Queue *queue = createQueue();
    for (int i = 0; i < N; i++)
    {
        int command, x;
        scanf("%d", &command);
        switch (command)
        {
        case 1:
            scanf("%d", &x);
            enqueue(queue, x);
            break;
        case 2:
            dequeue(queue);
            break;
        case 3:
            displayFront(queue);
            break;
        case 4:
            displaySize(queue);
            break;
        default:
            break;
        }
    }

    freeQueue(queue);

    return 0;
}