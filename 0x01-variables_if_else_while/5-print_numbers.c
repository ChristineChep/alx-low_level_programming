#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: Print a single digit number base 10 from 0
 * Return: 0 Success
 */
int main(void)
{
	char c = '0';

	while (c <= 9)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
