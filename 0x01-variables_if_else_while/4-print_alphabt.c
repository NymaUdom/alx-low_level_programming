#include <stdio.h>
/**
 * main - Print Alpha in lowercase
 * Follow by new line except q and e
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'a', la <= 'z', la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}
	putchar('\n');
	return (0);
}
