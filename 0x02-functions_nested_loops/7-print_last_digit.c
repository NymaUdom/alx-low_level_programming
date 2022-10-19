#include "main.h"
/**
 * print_last_digit - print the last degit of an int
 * @n: the number
 *
 * Return: last degit
 */
int print_last_digit(int n)
{
	int ld n % 10;

	if (ld < 0)
		ld *= -1;
	_putchar(ld + '0');
	return (0);
}
