#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @m :input number as an integer
 * Return: value of last digit
 */
int print_last_digit(int m)
{
int last;
last = m % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}
