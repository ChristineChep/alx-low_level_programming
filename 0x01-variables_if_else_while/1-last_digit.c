#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point 
 *
 * Description: Output of the program is last digit of  followed by n
 *
 *Return: 0 (success)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
		printf("Last digit of %c is  and is greater than 5", n);
	}
	else if ( n == 0)
	{
		printf("Last digit of %c is  and is 0", n);
	}
	else
	{
		printf("Last digit of %c is and is less than 6 and not 0", n);
	}

	return (0);
}
