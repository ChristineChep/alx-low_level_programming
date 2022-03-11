#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Descriptionprint numbers of base 16 in lower case
 * Return: 0 Success
 */
int main(void)
{
	int num = 30;

	while (num <= 39)
	{
		putchar(num);
		num++;
	}

	num = 61;

	while (num <= 66)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
