#include <stdio.h>
#include <stdlib.h>

typedef struct listint_s {
    int n;
    struct listint_s *next;
} listint_t;

listint_t *insert_node(listint_t **head, int number) {
    listint_t *new_node = malloc(sizeof(listint_t));
    if (new_node == NULL) {
        return NULL;  // Memory allocation failed
    }
    new_node->n = number;
    new_node->next = NULL;

    if (*head == NULL || number < (*head)->n) {
        new_node->next = *head;
        *head = new_node;
        return new_node;
    }

    listint_t *current = *head;
    while (current->next != NULL && number >= current->next->n) {
        current = current->next;
    }

    new_node->next = current->next;
    current->next = new_node;

    return new_node;
}

int main() {
    listint_t *head = NULL;

    // Insert nodes in sorted order
    insert_node(&head, 5);
    insert_node(&head, 10);
    insert_node(&head, 3);
    insert_node(&head, 7);

    // Print the linked list
    listint_t *current = head;
    while (current != NULL) {
        printf("%d ", current->n);
        current = current->next;
    }

    return 0;
}
