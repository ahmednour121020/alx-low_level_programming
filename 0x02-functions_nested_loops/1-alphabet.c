#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Description:  program that prints alphabet from a to z useing _putchar
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
