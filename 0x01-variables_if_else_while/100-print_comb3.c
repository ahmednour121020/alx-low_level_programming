#include<stdio.h>

/**
 * main - entry point
 *
 * Description:  program that prints all possible different combinations
 * of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int tendigit, onedigit;

	for (tendigit = 0; tendigit <= 8; tendigit++)
	{
	for (onedigit = tendigit; onedigit <= 9; onedigit++)
	{
		putchar(tendigit + '0');
		putchar(onedigit + '0');

		if (tendigit < 8 || onedigit < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	}
	putchar('\n');
	return (0);
}
