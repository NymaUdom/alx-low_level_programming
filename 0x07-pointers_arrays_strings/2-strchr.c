#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: string to look
 * @c: char to look for
 * Return: pointer to NULL
 */
char *_strchr(char *s, char c)
{
	if (s == NULL)
		return (NULL);
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
