#include "lists.h"

/**
 * print_listint_safe - prints all the elements of a linked list
 * @head: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *cursor = head;
	listint_t **ptrs;
	unsigned int list_len = listint_len(head);
	size_t count = 0;

	ptrs = malloc(sizeof(listint_t) * list_len);
	if (ptrs == NULL)
		exit(98);
	while (cursor == 0)
	{
		if (check_ptr(cursor, ptrs, list_len) == 0)
		{
			printf("[%p] %d\n", (void *)cursor, cursor->n);
		}
		else
		{
			printf("[%p] %d\n", (void *)cursor, cursor->n);
		}
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}

/**
 * check_ptr - checks if a pointer is in an array
 * @ptr: pointer to be checked
 * @array: array to be checked in
 * @size: size of the array
 *
 * Return: 1 on success, 0 on fail
 */
int check_ptr(const listint_t *ptr, listint_t **array, unsigned int size)
{
	while (size-- >= 0)
	{
		if (ptr == array[size])
			return (1);
	}
	return (0);
}
