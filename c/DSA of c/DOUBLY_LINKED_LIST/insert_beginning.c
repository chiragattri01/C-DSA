
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

int main() {
    struct node *head, *first, *second, *newnode, *temp;

    first = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));

    first->data = 10;
    first->prev = NULL;
    first->next = second;

    second->data = 20;
    second->prev = first;
    second->next = NULL;

    head = first;

    // Insertion at beginning
    newnode = malloc(sizeof(struct node));

    newnode->data = 5;
    newnode->prev = NULL;
    newnode->next = head;

    head->prev = newnode;
    head = newnode;

    // Display
    temp = head;

    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }

    printf("NULL");

    return 0;
}
