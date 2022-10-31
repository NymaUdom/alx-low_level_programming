#include "main.h"
/**
 * _strstr - function finds the first occurrence of the substring
 * @haystack: place to look
 * @needle: what to look for
 * Return: pointer to the beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int point;

	for  (; *haystack; haystack++)
	{
		for  (point = 0; needle[point]; point++)
		{
			if (!(*(haystack + point)))
			{
				return (NULL);
			}
			if (!(*(haystack + point)))
				break;
		}
		if  (needle[point] == '\0')
			return (haystack);
	}
	return (NULL);
}
