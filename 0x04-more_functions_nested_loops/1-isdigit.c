#include "main.h"
/**
 * _isdigit-  it check for the digit (0-9)
 * @c: number to be checked.
 * return: 1 if it is digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);


	else
		return (0);
}
