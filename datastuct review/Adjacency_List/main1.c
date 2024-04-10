#include <stdio.h>
#include <stdlib.h>

struct Node {
    int adj_vertex;
    struct Node* next;
};

struct Node **createGraph(int n) {
    struct Node **adjList = malloc(sizeof(struct Node*) * n);
    for (int i = 0; i < n; i++) {
        adjList[i] = NULL;
    }

    return adjList;
}

void addEdge(struct Node** adjList, int u, int v) {
    struct Node* node = adjList[u];

    if (node == NULL) {
        node = malloc(sizeof(struct Node));
        node->adj_vertex = v;
        node->next = NULL;
    } else {
        while(node->next != NULL) {
            node = node->next;
            struct Node* new_node = malloc(sizeof(struct Node));
            new_node->adj_vertex = v;
            new_node->next = NULL;
            node->next = new_node;
        }
    }
}

void printGraph(struct Node** adjList, int n) {
    for (int u = 0; u < n; u++) {
        printf("[%d] head: ", u);
        struct Node* node = adjList[u];
        while(node) {
            printf("-> %d", node->adj_vertex);
            node = node->next;
        }
        printf("-> NULL \n");
    }
}

int main() {
    int n = 5;
    int **adjList = createGraph(n);

    addEdge(adjList, 0, 1);
    addEdge(adjList, 0, 3);
    addEdge(adjList, 1, 2);
    addEdge(adjList, 1, 4);
    addEdge(adjList, 2, 1);
    addEdge(adjList, 2, 4);
    addEdge(adjList, 4, 3);

    printGraph(adjList, n);

    return 0;
}