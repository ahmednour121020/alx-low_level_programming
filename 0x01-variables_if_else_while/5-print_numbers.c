#include<stdio.h>

/**
 * main - entry point
 *
 * Description: program that prints all single digit numbers
 * of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		printf("%i", num);
	}
	printf("\n");
	return (0);
}