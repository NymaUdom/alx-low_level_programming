#include "main.h"
#include <stdlib.h>
/**
 * _calloc -  allocates memory for an array
 * @nmemb: num of element
 * @size: size of bytes
 * Return: pointer to the allocated memory
 * if nmemb of size is 0, return NULL
 * if malloc fails return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	if (i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
