#include "main.h"
/**
* Main- Entry point
* Descrition: print _putchar followed by a new line
* Return :0 success
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

	-putchar('\n');

	return (0);
}
