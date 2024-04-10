#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 100

struct node {
    char name[MAX_NAME_LENGTH];
    int size;
    int type;
    int total_size;
    struct node* parent;
    struct node* firstChild;
    struct node* nextSibling;
};

struct node* createNode(char name[], int size, int type, struct node* parent) {
    struct node* node = (struct node*)malloc(sizeof(struct node));
    if (node == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    
    strcpy(node->name, name);
    node->size = size;
    node->type = type;
    node->total_size = 0;
    node->parent = parent;
    node->firstChild = NULL;
    node->nextSibling = NULL;

    if (parent != NULL) {
        struct node* child = parent->firstChild;
        if (child != NULL) {
            while (child->nextSibling != NULL) {
                child = child->nextSibling;
            }
            child->nextSibling = node;
        } else {
            parent->firstChild = node;
        }
    }

    return node;
}

void totalSize(struct node* node) {
    if (node == NULL) {
        return;
    }

    struct node* child = node->firstChild;
    while (child != NULL) {
        totalSize(child);
        node->total_size += child->total_size;
        child = child->nextSibling;
    }
    node->total_size += node->size;
}

void preorder(struct node* node, int depth) {
    if (node == NULL) {
        return;
    }

    for (int i = 0; i < depth; i++) {
        printf("  "); // Add indentation for better visualization
    }

    printf("Name: %s, Total Size: %d\n", node->name, node->total_size);

    struct node* child = node->firstChild;
    while (child != NULL) {
        preorder(child, depth + 1);
        child = child->nextSibling;
    }
}

int main() {
    struct node* root = createNode("/user/rt/courses/", 1000, 1, NULL);
    struct node* cs016 = createNode("cs016/", 2000, 1, root);
    struct node* grades1 = createNode("grades", 8000, 0, cs016);

    struct node* homeworks = createNode("homeworks/", 1000, 1, cs016);
    struct node* hw1 = createNode("hw1", 3000, 0, homeworks);
    struct node* hw2 = createNode("hw2", 2000, 0, homeworks);
    struct node* hw3 = createNode("hw3", 4000, 0, homeworks);

    struct node* programs = createNode("programs/", 1000, 1, cs016);
    struct node* pr1 = createNode("pr1", 57000, 0, programs);
    struct node* pr2 = createNode("pr2", 97000, 0, programs);
    struct node* pr3 = createNode("pr3", 74000, 0, programs);

    struct node* cs252 = createNode("cs252/", 1000, 1, root);
    struct node* projects = createNode("projects/", 1000, 0, cs252);
    struct node* grades2 = createNode("grades", 3000, 0, cs252);
    struct node* papers = createNode("papers/", 1000, 1, projects);

    struct node* buylow = createNode("buylow", 26000, 0, papers);
    struct node* sellhigh = createNode("sellhigh", 55000, 0, papers);

    struct node* demos = createNode("demos/", 1000, 1, projects);
    struct node* market = createNode("market", 4786000, 0, demos);

    totalSize(root);
    preorder(root, 0);

    return 0;
}
