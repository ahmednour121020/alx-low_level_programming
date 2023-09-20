#include<stdio.h>

/**
 * main - entry point
 *
 * Description:  program that prints all possibile different combinations
 * of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1 = 0;
	int num2, num3;

	while (num1 <= 9)
	{
		num3 = 0;
	while (num3 <= 9)
	{
		if (num1 != num2 && num1 < num2 && num2 != num3 &&  num2 < num3)
		{
			putchar(num1 + 48);
			putchar(num2 + 48);
			putchar(num3 + 48);

			if (num1 + num2 + num3 != 24)
			{
				putchar(',');
				putchar(' ');
			}
			num3++;
		}
		num2++;
	}
	num1++;
	}
	putchar('\n');
	return (0);
}
