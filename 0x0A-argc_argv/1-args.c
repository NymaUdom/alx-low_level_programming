#include <stdio.h>
/**
 * main - prints a number of arguments passed into it
 * @argc: length of the argument passed
 * @argv: arguments passed
 * Return: success
 */
int main(int argc, char *argv[] _attribute_((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
