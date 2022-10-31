#include "main.h"
/**
 * _strpbrk - function that locates the first occurrence in the string
 * @s: string to look fot occurences
 * @accept: print to compare against
 *
 *Return: pointer to the byte or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char c, *p;

	for (c = *s; c != 0; s++, c = *s)
	{
		for  (p = accept; *p != 0; p++)
		{
			if (c == *p)
			{
				return (s);
			}
		}
	}
	return (0);
}
