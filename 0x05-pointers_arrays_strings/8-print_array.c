#include "main.h"
#include <stdio.h>
/**
 * print_array - elements of an array of integers
 * @a: arrays
 * @n: num of value to be print
 */
void print_array(int *a, int n)
{
	int i = 0;

	for  (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf('\n');
}
