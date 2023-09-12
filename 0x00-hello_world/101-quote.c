#include <unistd.h>

/**
 * main - entry point
 *
 * Description: print a qoute using write function write
 *
 * Return: 1 (not Success)
 */

int main(void)
{
	char qu[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, qu, 59);
	return (1);
}
