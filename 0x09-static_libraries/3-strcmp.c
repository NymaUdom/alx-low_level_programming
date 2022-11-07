#include "main.h"
#include <stdio.h>
/**
 *  _strcmp - function that compares two strings
 *  @s1: first parameter
 *  @s2: second parameter
 *  Return: 0 if s1 and s2 are equal
 *  another number if not equal
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
