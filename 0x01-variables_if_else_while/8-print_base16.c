#include<stdio.h>

/**
 * main - entry point
 *
 * Description: program that prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 48;

	while (num <= 102)
	{
		putchar(num);

		if (num == 57)
		{
			num += 39;
		}
		num++;
	}
	putchar('\n');
	return (0);
}