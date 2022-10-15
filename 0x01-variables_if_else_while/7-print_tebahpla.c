#include <stdio.h>
/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0
 */
int main(void)
{
	char letters;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letters);
	putchar('\n');
	return (0);
}
