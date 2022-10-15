#include <stdio.h>
/**
 * main - Print Alpha in upper and lower cases
 * Return: If no error return 0
 */
int main(void)
{
	char ch;

	for (ch = 'a', ch <= 'z', ch++)
		putchar(ch);
	for (ch = 'A', ch <= 'Z', ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
