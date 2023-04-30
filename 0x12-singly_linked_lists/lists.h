#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listt
{
	char *str;
	unsigned int len;
	struct listt *next;
} listst;

size_t print_list(const listst *h);
size_t list_len(const listst *h);
listst *add_node(listst **head, const char *str);
listst *add_node_end(list_t **head, const char *str);
void free_list(listst *head);

#endif

