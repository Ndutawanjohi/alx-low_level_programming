#include <stdio.h>
/**
 * main - prints the natural numbers below 0124 that are multiples of 3 or 5
 * Return: 0
 */
int main(void)
{
int s, t;
for (s = 1; s < 1024; s++)
{
if ((s % 3) == 0 || (s % 5) == 0)
t += s;
}
printf("%d\n", t);
return (0);
}
