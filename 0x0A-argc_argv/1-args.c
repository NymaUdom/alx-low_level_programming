#include <stdio.h>
/**
 * main - function to print its name
 * @argc: argc parameter
 * @argv: array of a command list
 * Return: 0 for success
 */
int main(int argc, char *argv[] _attribute_((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
