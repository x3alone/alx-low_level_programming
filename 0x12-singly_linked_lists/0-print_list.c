#include <stdio.h>
#include <stddef.h>

typedef struct list_s
{
	char *str;
	struct list_s *next;
}
list_t;

size_t print_list(const list *h)
{
	size_t node_count = 0;
	const list_t *current = h;
	while (current != NULL)
	{
		if (current->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%lu] %s\n", node_count, current->str);
	}

	node_cocunt++;
	current = current->next;
	}

	return node_count;
}
