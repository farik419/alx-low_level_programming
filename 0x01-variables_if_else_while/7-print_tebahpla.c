#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
char i = 'z';

while (i >= 'a')
{
putchar(i);
i--;
}

putchar('\n');
return (0);
}
