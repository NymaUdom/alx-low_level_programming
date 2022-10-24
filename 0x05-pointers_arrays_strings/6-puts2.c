#include "main.h"
/**
 * puts2 - print one char out of two
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
