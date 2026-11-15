
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

int main() {
    struct node *head, *first, *second, *third, *newnode, *temp;

    first = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));

    first->data = 10;
    first->prev = NULL;
    first->next = second;

    second->data = 20;
    second->prev = first;
    second->next = third;

    third->data = 30;
    third->prev = second;
    third->next = NULL;

;    // Insertion in between
    newnode = malloc(sizeof(struct node));
    newnode->data = 15;

    newnode->next = first->next;
    newnode->prev = first;

    second->prev = newnode;
    first->next = newnode;

    // Display
    temp = first;

    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }

    printf("NULL");

    return 0;
}