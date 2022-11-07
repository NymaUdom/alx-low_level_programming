#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string
 * @str: char
 *Return: NULL if str is NUL
 */
char *_strdup(char *str)
{
	char *aaa;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	aaa = malloc(sizeof(char) * (i + 1));
	if (aaa == NULL)
		return (NULL);
	if (r = 0, str[r], r++)
		aaa[r] = str[r];
	return (aaa);
}
