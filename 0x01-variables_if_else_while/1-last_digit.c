#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry code
 * Description: prints "last digit"
 * Return: 0 (Succes)
 */
int main(void)
{
	int n;
	int last;

	srand(time(o));
	n = rand() - RAND_MAX/ 2;
	last = n % 10;

	if (last > 5)
		printf("Last digit of %d is %d  and is greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %d is %d and is o\n", n, last);
	else if (last < 6)
		printf("Last digit of %d and %d and is less than 6 and not o\n", n, last);
	return (0);
}
