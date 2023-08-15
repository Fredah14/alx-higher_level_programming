#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * is_palindrome - Checks if a singly linked list is a palindrome.
 * @head: Pointer to the head of the linked list.
 * Return: 0 if not a palindrome, 1 if a palindrome.
 */
int is_palindrome(listint_t **head)
{
    listint_t *slow = *head, *fast = *head, *prev = NULL, *temp = NULL;
    listint_t *second_half = NULL;
    int palindrome = 1;

    if (*head == NULL || (*head)->next == NULL)
        return (1);

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }

    if (fast != NULL)
    {
        second_half = slow->next;
        prev->next = NULL;
    }
    else
    {
        second_half = slow;
    }

    while (second_half != NULL)
    {
        temp = second_half->next;
        second_half->next = prev;
        prev = second_half;
        second_half = temp;
    }

    second_half = prev;
    while (*head != NULL && second_half != NULL)
    {
        if ((*head)->n != second_half->n)
        {
            palindrome = 0;
            break;
        }
        *head = (*head)->next;
        second_half = second_half->next;
    }

    return palindrome;
}
