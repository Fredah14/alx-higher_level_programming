#include <stdio.h>
#include <stdlib.h>

struct listint_s {
    int n;
    struct listint_s *next;
};

typedef struct listint_s listint_t;

int check_cycle(listint_t *list) {
    listint_t *slow = list;
    listint_t *fast = list;

    while (slow != NULL && fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return (1);
        }
    }

    return (0);
}

int main(void) {
    listint_t *head = malloc(sizeof(listint_t));
    head->n = 1;
    head->next = malloc(sizeof(listint_t));
    head->next->n = 2;
    head->next->next = malloc(sizeof(listint_t));
    head->next->next->n = 3;
    head->next->next->next = head->next; // Creating a cycle

    int hasCycle = check_cycle(head);
    if (hasCycle) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    // Clean up memory
    head->next->next->next = NULL; // Breaking the cycle before freeing
    free(head->next->next);
    free(head->next);
    free(head);

    return (0);
}
