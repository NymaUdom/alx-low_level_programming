#include <stdio.h>
/**
 * main-entry point for the program.
 *
 *return:return zero if no error otherwisw return error
 */
int main(void)
{
	 printf("Size of a char: %l byte(s)/n", sizeof(char));
	 printf("Size of an int: %l byte(s)/n", sizeof(int));
	 printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	 printf("Size of a long long int: %l byte(s)\n", sizeof(long long int));	 printf("Size of a float: %ld byte(s)\n", sizeof(float));
	 return (0);
}
