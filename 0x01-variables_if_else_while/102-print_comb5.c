#include <stdio.h>
/**
<<<<<<< HEAD
 * main - main block
 * Return: Always 0
=======
 * main - Entry point
 * Return: Always 0.
>>>>>>> 184de75f2e71daf283c7fc1fdd6df8cabd098342
 */
int main(void)
{
int num1, num2;
for (num1 = 0; num1 <= 98; num1++)
{
for (num2 = num1 + 1; num2 <= 99; num2++)
{
putchar((num1 / 10) + '0');
putchar((num1 % 10) + '0');
putchar(' ');
putchar((num2 / 10) + '0');
putchar((num2 % 10) + '0');
if (num1 == 98 && num2 == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
