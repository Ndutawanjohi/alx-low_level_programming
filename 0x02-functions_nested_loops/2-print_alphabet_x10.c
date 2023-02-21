#include "main.h"
/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase
* then adds a new line
*/
void print_alphabet_x10(void)
{
int k, b;
for (k = 0; k <= 9; k++)
{
for (b = 97; b <= 122; b++)
{
_putchar(b);
}
_putchar('\n');
}
}
