#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array for print and string
 * @size: num of array
 * @c: cha
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}
	/*define values with malloc*/
	buffer = (char *) malloc(size * sizeof(c));
	if (buffer == 0)
	{
	return (NULL);
	}
	else
		position = 0;
	while (position < size) /*while for array*/
	{
		*(buffer + position) = c
			position++;
	}
	return (buffer);
}
