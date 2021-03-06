#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_listint - prints a singly linked list
 * @h: pointer to head of singly linked list
 *
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
unsigned int size = 0;

while (h != NULL)
{
printf("%i\n", h->n);
h = h->next;
size++;
}
return (size);
}
