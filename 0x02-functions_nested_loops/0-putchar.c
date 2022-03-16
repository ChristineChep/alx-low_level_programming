#include "main.h"
/**
 * main - entry point
 * prints _putchar followed by new line
 * Description: prints new line
 * Return: 0
 */
int main(void)
{
	char ch[] = "_putchar";
	int i = 0;

	while (ch[i] != '\0')
	{
		_putchar(ch[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
