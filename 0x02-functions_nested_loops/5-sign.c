#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: Number whose sign is to be checked.
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	int r;


	if (n > 0)
	{
		_putchar('+');
		return (0);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
