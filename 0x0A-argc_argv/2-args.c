#include <stdio.h>
/**
 * main - function to print its name
 * @argc: argc parameter
 * @argv: array of command list
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i

		for (i = 0; i < argc; i++)
		{
		printf("%d = %s\n", i, argv[i]);
		}
	return (0);
}
