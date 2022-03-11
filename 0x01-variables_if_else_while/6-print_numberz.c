#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * description:gdo not use variable char to print single digits
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
	putchar('\n');
	return (0);
}
