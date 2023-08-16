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
            return 1;
        }
    }

    return 0;
}
