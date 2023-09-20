#include "main.h"

/**
 * _islower - function checks if charcter is lowercase or not
 *
 * @c:  checks input of function
 *
 * Return: returns 1 if it's lower
 * otherwise return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
