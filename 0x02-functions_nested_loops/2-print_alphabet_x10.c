#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Description:  program that prints 10 times the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int ch, rows;

	for (rows = 0; rows <= 9; rows++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
