#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Descriptionprint numbers of base 16 in lower case
 * Return: 0 Success
 */
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}

	num = 97;

	while (num <= 102)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
