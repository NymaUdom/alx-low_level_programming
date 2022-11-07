#include "main.h"
/**
 * _memcpy -  function that copies memory area
 * @dest: place to copy
 * @src: copy from
 * @n: how much to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n-- > 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (ptr);
}
