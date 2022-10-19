#include "main.h"
/**
 * _isalpha - check for charecter alphabet
 * @c: character to be checked
 *
 * Return; 1 for uppercase and lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
