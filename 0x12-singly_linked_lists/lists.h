#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdlib.h>

/**
 * struct list_s - singly lind list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the nextt node
 *
 * Description: singly linked list node
 * structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif /* _LISTS_H_ */
