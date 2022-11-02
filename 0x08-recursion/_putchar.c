#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the char to print
 * Return: 1 if success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
