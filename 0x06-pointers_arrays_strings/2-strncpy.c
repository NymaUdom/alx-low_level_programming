#include "main.h"
#include <stdio.h>
/**
 * _strncpy - function that copies a string
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
