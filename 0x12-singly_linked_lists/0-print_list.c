#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

size_t print_list(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		if(!h->str)
			printf("[0] (nill)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++
		h = h->next;
	}
	return (nodes);
}
